/* Single registration table for overworld thought bubbles.
 *
 * THOUGHT_BUBBLE_ASSET_LIST: symbolic id (must match sThoughtBubble<NAME>Tiles /
 *   Palette INCBINs in src/thought_bubble.c)
 * THOUGHT_BUBBLE_FLAG_LIST:  SCENARIO_MAIN key → symbolic id
 *
 * SCENARIO_MAIN keys are packed as (main << 8) | (sub & 0xFF).
 * Unmatched / unset keys use DEFAULT.
 *
 * Add a bubble:
 *   1. graphics/custom/thought_bubbles/<name>/thought.png  (128×64 indexed)
 *   2. INCBIN_U8/U16 lines in src/thought_bubble.c for <NAME>
 *   3. _(NAME) in THOUGHT_BUBBLE_ASSET_LIST
 *   4. _(0xMMSU, NAME) in THOUGHT_BUBBLE_FLAG_LIST (optional)
 *   5. make
 */

#define THOUGHT_BUBBLE_ASSET_LIST(_) \
    _(DEFAULT)

#define THOUGHT_BUBBLE_FLAG_LIST(_)
/* Example (postgame main=0x11 sub=0):
 *   _(0x1100, SOME_EVENT)
 */
