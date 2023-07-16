#include <vram.h>
#include <screen.h>
#include "tank.h"
#include "controller.h"
#include "patterns.h"


void tank_draw(const tank_t * const p){
    OBM[p->object].x = ( p->xp );
    OBM[p->object].y = ( p->yp );
    OBM[p->object].color = p->color;
    OBM[p->object].pattern_config = p->pmfa;
}

void tank_advance(tank_t * const p){
    uint8_t controller_value;

    if (p->player == 1) controller_value = CONTROLLER_1;
    if (p->player == 2) controller_value = CONTROLLER_2;

    if(controller_value & CONTROLLER_UP_MASK){
        p->yp -= tank_speed;
        if(controller_value & CONTROLLER_RIGHT_MASK){
            p->xp += tank_speed;
            p->pmfa = pmfa_tank_upright;
        }else if(controller_value & CONTROLLER_LEFT_MASK){
            p->xp -= tank_speed;
            p->pmfa = pmfa_tank_upright | HFLIP_MASK;
        }else{
            p->pmfa = pmfa_tank_up;
        }
    }
    else if(controller_value & CONTROLLER_DOWN_MASK){
        p->yp += tank_speed;
        if(controller_value & CONTROLLER_RIGHT_MASK){
            p->xp += tank_speed;
            p->pmfa = pmfa_tank_upright | VFLIP_MASK;
        }else if(controller_value & CONTROLLER_LEFT_MASK){
            p->xp -= tank_speed;
            p->pmfa = pmfa_tank_upright | VFLIP_MASK | HFLIP_MASK;
        }else{
            p->pmfa = pmfa_tank_up | VFLIP_MASK;
        }
    }
    else if(controller_value & CONTROLLER_LEFT_MASK){
        p->xp -= tank_speed;
        p->pmfa = pmfa_tank_right | HFLIP_MASK;
    }
    else if(controller_value & CONTROLLER_RIGHT_MASK){
        p->xp += tank_speed;
        p->pmfa = pmfa_tank_right;
    }
}
