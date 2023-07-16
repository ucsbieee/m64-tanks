
#include "levels.h"
#include "patterns.h"

void level_draw(const level_t level) {
    uint8_t i, j;
    for (i = 0; i < 30; i++) {
        for (j = 0; j < 32; j++) {
            if (level[i][j])
                NTBL[i][j] = pmba_white;
            else
                NTBL[i][j] = pmba_black;
        }
    }
}
