
#include "patterns.h"

extern const uint8_t pmba_black = 0;
extern const uint8_t pmba_white = 1;

extern const uint8_t pmfa_tank_up = 1;
extern const uint8_t pmfa_tank_right = 2;
extern const uint8_t pmfa_tank_upright = 3;

void load_background_pattern(const pattern_t pattern, const uint8_t pmba) {
    uint8_t i;
    for (i = 0; i < 16; i++)
        PMB[pmba][i] = pattern[i];
}
void load_foreground_pattern(const pattern_t pattern, const uint8_t pmfa) {
    uint8_t i;
    for (i = 0; i < 16; i++)
        PMF[pmfa][i] = pattern[i];
}

void load_patterns(void) {
    load_background_pattern(pattern_black, pmba_black);
    load_background_pattern(pattern_white, pmba_white);
    load_foreground_pattern(pattern_white, pmfa_tank_up);
    load_foreground_pattern(pattern_white, pmfa_tank_right);
    load_foreground_pattern(pattern_white, pmfa_tank_upright);
}
