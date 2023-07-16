#include <vram.h>
#include <Q9_6.h>

#define tank_speed                      ((Q9_6)0x0009)  // 0.15

#define tank_width    (SINT_TO_Q9_6(8))
#define tank_height   (SINT_TO_Q9_6(8))

typedef struct tank_s {
    Q9_6 xp, yp, xv, yv;
    uint8_t object, pmfa, color;
} tank_t;


void tank_draw(const tank_t * const p);

void tank_jump(tank_t * const p);
void tank_advance(tank_t * const p);
