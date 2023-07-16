
#ifndef __PATTERNS_H
#define __PATTERNS_H


#include <vram.h>

extern const pattern_t pattern_white;

extern const pattern_t pattern_tank_up;
extern const pattern_t pattern_tank_right;
extern const pattern_t pattern_tank_upright;


void load_background_pattern(const pattern_t pattern, const uint8_t pmba);
void load_foreground_pattern(const pattern_t pattern, const uint8_t pmfa);

void load_patterns(void);

#endif
