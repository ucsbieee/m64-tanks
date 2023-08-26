#include <vram.h>
#include "levels.h"

#define tank_speed    (1) 

#define tank_width    (8)
#define tank_height   (8)

typedef struct tank_s {
    int xp, yp, xv, yv;
    uint8_t object, pmfa, color, player;
} tank_t;


void tank_draw(const tank_t * const p);

void tank_advance(tank_t * const p);
void collision_detection(tank_t * const p, const level_t * const map);