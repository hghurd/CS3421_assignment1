//
// Created by hghurd on 8/31/2022.
//


#include "clock.h"
//#include "cpu.c"

static void reset();
void clockTick (unsigned int tick);
void clockDump();


static void reset() {
    currentTick = 0;
}

//shiftRegisters
void clockTick (unsigned int tick) {
    for (int i = currentTick; i < currentTick + tick; i++) {
        //cpuDoTick();
    }
}

void clockDump() {
    printf( "Clock: %d\n", currentTick );
}
