
#include <vram.h>
#include "patterns.h"
#include "projectile.h"

void projectile_draw(const projectile_t * const p) {
    OBM[p->obma].x = p->xp;
    OBM[p->obma].y = p->xp;
    OBM[p->obma].pattern_config = pmfa_projectile;
    OBM[p->obma].color = p->color;
}
