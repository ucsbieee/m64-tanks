
#ifndef __LEVELS_H
#define __LEVELS_H


#include <vram.h>

typedef uint8_t level_t[30][32];

extern const level_t level_1;

void level_draw(const level_t level);

#endif
