---
name: orchestrate
description: Run a task with Opus as orchestrator only and Haiku sub-agents doing the work. Opus splits the task, dispatches haiku-worker agents, and verifies each worker's CHECK-IN report (re-running the build gate, reading the diff, spot-checking evidence) before accepting it. Use when the user says /orchestrate, or asks for Opus to orchestrate with Haiku workers.
model: opus
---

# Orchestrate: Opus plans and verifies, Haiku works

You are the **orchestrator**. You do not do the task's work yourself: no editing of
`src/`, `include/`, `asm/`, `data/`, `sound/`, `graphics/`, `configs/`,
`RescueEditor/`, `documentation/`, or `tools/`. You plan, dispatch, verify, and
report. All edits come from `haiku-worker` agents.

The user's task is in the skill arguments (or the message that invoked this skill).

## Build gate

The default ROM is the modern hack build. `make` must succeed.

`make compare` checks `pmd_red.gba` against the retail sha1 in `red.sha1`. The
default `MODERN=1` hack is not expected to match that hash. Require
`make MODERN=0 compare` (last line `pmd_red.gba: OK`) only when the task is
retail-matching: a byte-identical agbcc decomp change. Say which gate each task
uses in the brief.

## 1. Plan

1. Read enough to split the task: the relevant files under `documentation/`,
   headers, and the source in scope. Reading and running read-only commands is fine.
2. Snapshot the tree before any worker runs:
   `git status --porcelain > <scratchpad>/orch-baseline.txt` and confirm the task's
   build gate is already OK (or record that it was already failing). You need this
   to tell worker edits apart from the user's existing uncommitted changes.
3. Split the work into tasks that a small model can do without judgment calls. Each
   task has: an id (`T1`, `T2`, ...), the exact files in scope, what "done" looks
   like, and the check to run (`make`, plus `make MODERN=0 compare` when the task
   must stay retail-identical). Prefer many small tasks over one big one. Keep the
   design decisions for yourself and put the answer in the brief.

## 2. Dispatch

Call the Agent tool with `subagent_type: "haiku-worker"` and `model: "haiku"`. If the
`haiku-worker` type is not available (the session started before it existed), use
`subagent_type: "general-purpose"`, `model: "haiku"`, and paste the rules and CHECK-IN
format from `.claude/agents/haiku-worker.md` into the brief.

The brief must stand alone (the worker starts with no context):

```
Task <id>: <one-line goal>
Scope: <files — and what is out of scope>
Background: <the facts you already established>
Steps: <numbered, concrete>
Build gate: make | make and make MODERN=0 compare
Done when: <observable result>
End with your CHECK-IN report.
```

**Concurrency.** Workers that edit files or run `make` share one tree and one ROM, so
run them **one at a time**. Read-only tasks (research, "find all callers of X") can run
in parallel. Do not use `isolation: "worktree"`: worktrees have no `baserom.gba`, so
`make MODERN=0 compare` cannot run there.

## 3. Verify every CHECK-IN

A worker's report is a claim, not proof. Before accepting it:

1. **Build:** run the task's build gate yourself. A failed `make`, or a retail-matching
   task whose `make MODERN=0 compare` is not OK, means not accepted.
2. **Diff:** `git status --porcelain` against the baseline and `git diff` on the changed
   files. Every change must be inside the task's scope; anything else is a finding.
3. **Rules:** no commits, no new branches, no edits to `baserom.*`. Retail-matching
   tasks must not change bytes. RescueEditor behavior changes need a failing test
   first. Save-layout changes must follow `.cursor/skills/save-sram-layout/SKILL.md`.
4. **Evidence:** spot-check at least the items under "Please verify" and "Unsure
   about", plus one other at random. Open the code and confirm the evidence holds.
5. **Honesty:** the commands and outputs it quoted match what you see.

Then decide:

- **APPROVED** — record it and move on.
- **REVISE** — load `SendMessage` (ToolSearch `select:SendMessage`) and message the
  same worker, so it keeps its context: `REVISE <id>:` then a numbered list of exact
  fixes. It answers with a new CHECK-IN; verify again. At most **2** revise rounds.
- **REJECT** — after 2 failed rounds, or if the work is wrong at the root. Revert only
  the files this worker changed that were clean in the baseline (`git checkout -- <file>`);
  for files that were already dirty in the baseline, undo the worker's hunks by hand
  instead, so the user's changes survive. Confirm the build gate is back to its
  baseline, then re-brief a fresh worker with what went wrong, or keep the task as a blocker.

Only after a task is APPROVED does the next file-editing worker start.

## 4. Finish

1. Run `make` and say explicitly that you ran it and the result. If any approved task
   was retail-matching, also run `make MODERN=0 compare` and say that result.
2. Do not commit unless the user asks. Do not create a branch.
3. If the session changed `RescueEditor/`, restart RescueTemple with `./RescueEditor/dev.sh`.
4. Report to the user:

```
## Orchestrated session report

- **Tasks:** N approved / M revised / K rejected
- **make:** OK / FAILED
- **make MODERN=0 compare:** OK / FAILED / not required
- **Blockers:** none / <describe>

| Task | Result | Rounds | Notes |
|------|--------|--------|-------|
| T1 <goal> | APPROVED | 1 | ... |

### What was caught in review
- T2: worker changed a file outside scope; sent back, reverted
```

The "caught in review" list matters: it tells the user whether the Haiku output can be
trusted for this kind of task.
