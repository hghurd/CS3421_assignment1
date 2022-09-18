//
// Created by hghurd on 8/31/2022.
//


#include "clock.h"
#include "cpu.h"

int currentTick;

void clockReset() {
    currentTick = 0;
}

//shiftRegisters
void clockTick (unsigned int tick) {
    for (int i = currentTick; i < currentTick + tick; i++) {
        cpuDoTick();
    }
}

void clockDump() {
    printf( "Clock: %d\n", currentTick );
}
