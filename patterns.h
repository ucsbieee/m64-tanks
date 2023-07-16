
#ifndef __PATTERNS_H
#define __PATTERNS_H


#include <vram.h>


extern const pattern_t pattern_black;
extern const pattern_t pattern_white;

extern const pattern_t pattern_tank_up;
extern const pattern_t pattern_tank_right;
extern const pattern_t pattern_tank_upright;
extern const pattern_t pattern_projectile;


extern const uint8_t pmba_black;
extern const uint8_t pmba_white;

extern const uint8_t pmfa_tank_up;
extern const uint8_t pmfa_tank_right;
extern const uint8_t pmfa_tank_upright;
extern const uint8_t pmfa_projectile;


void load_background_pattern(const pattern_t pattern, const uint8_t pmba);
void load_foreground_pattern(const pattern_t pattern, const uint8_t pmfa);

void load_patterns(void);

#endif
