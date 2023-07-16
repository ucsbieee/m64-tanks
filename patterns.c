
#include "patterns.h"

const uint8_t pmba_black = 0;
const uint8_t pmba_white = 1;

const uint8_t pmfa_tank_up = 1;
const uint8_t pmfa_tank_right = 2;
const uint8_t pmfa_tank_upright = 3;
const uint8_t pmfa_projectile = 4;

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
    load_foreground_pattern(pattern_projectile, pmfa_projectile);
}
