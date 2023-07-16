
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

#include "patterns.h"
#include "levels.h"

// run once on startup
void reset(void) {
    load_patterns();
    level_draw(level_1);
    background_palette = WHITE_C1_MASK | WHITE_C0_MASK;
}

// run 60 times a second
void do_logic(void) { }

// run after do_logic and once gpu is idle
void fill_vram(void) { }
