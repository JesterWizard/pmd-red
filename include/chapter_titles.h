#ifndef GUARD_CHAPTER_TITLES_H
#define GUARD_CHAPTER_TITLES_H

/*
 * PMD2-style chapter title cards for the main story (runtime toggle
 * `chapter_titles`). Chapters follow the game's own story episodes
 * (EVENT_M01E01A … EVENT_M01E10A): each starts on the first morning of its
 * SCENARIO_MAIN major, when EVENT_DIVIDE moves it from (major, 0) to
 * (major, 1). The card is queued there and shown before the next ground map
 * loads: background art fades in, then "Chapter N" and the title.
 */

#define CHAPTER_TITLE_COUNT 10

/* Called by ScenarioCalc for SCENARIO_MAIN changes. */
void ChapterTitles_NotifyScenarioMain(s32 oldMain, s32 oldSub, s32 newMain, s32 newSub);

/* Shows the queued chapter card, if any (no-op when the toggle is off). */
void ShowPendingChapterTitle_Async(void);

#endif /* GUARD_CHAPTER_TITLES_H */
