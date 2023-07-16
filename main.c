
// ==================== main.c ==================== //
// Follow this file template to implement your game //
// ================================================ //

#define SIM 1 // change value depending if running simulation or not

// ================================ //
#pragma code-name ("CODE")
#pragma bss-name ("BSS")

#include <int.h>
#include <vram.h>
#include <stop.h>
#include <Q9_6.h>
#include <mapache64_zero_page.h>
#include <controller.h>
#include <screen.h>
#include "tank.h"
#include "patterns.h"
#include "levels.h"

tank_t t1;
tank_t t2;

// run once on startup
void reset(void) {
    uint8_t i, j;
    load_patterns();
    level_draw(level_1);
    background_palette = WHITE_C1_MASK | WHITE_C0_MASK;


    for(i =0; i < 32; i++ ){
        for(j = 0; j< 30; j++){
            NTBL[i][j] = 1;        
        }
    }
    for(i =0; i < 16; i++){
        PMB[1][i] = 0xFF;
    }
    for(i =0; i < 16; i++){
        PMF[1][i] = 0xFF;
    }
    // Tank 1 Setup
    t1.xp = 0;
    t1.yp = 0;
    t1.xv = 0;
    t1.yv = 0;
    t1.object = 0; 
    t1.color = WHITE_C0_MASK;
    t1.pmfa = pmfa_tank_right;
    t1.player = CONTROLLER_1;
    
    // Tank 2 Setup
    t2.xp = 255;
    t2.yp = 255;
    t2.xv = 0;
    t2.yv = 0;
    t2.object = 0; 
    t2.color = WHITE_C0_MASK;
    t2.pmfa = pmfa_tank_right | HFLIP_MASK;
    t2.player = CONTROLLER_2;

    background_palette = BLACK_C0_MASK;    
}

// run 60 times a second
void do_logic(void) {

 }

// run after do_logic and once gpu is idle
void fill_vram(void) {
    tank_draw(&t1);
    tank_draw(&t2);
}
