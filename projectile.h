
#ifndef __PROJECTILE_H
#define __PROJECTILE_H

#include <int.h>

typedef struct projectile_s {
    uint8_t xp, yp, xv, yv;
    uint8_t obma, color;
} projectile_t;

void projectile_draw(const projectile_t * const p);

#endif
