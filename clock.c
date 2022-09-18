/**
 * Author: Garrett Hurd
 * Username: hghurd
 * Filename: clock.c
 * Date: 2022-09-18
 *
 * Description:
 *
 */

#include "clock.h"
#include "cpu.h"

int currentTick;

void clockReset() {
    currentTick = 0;
}

//This is probably not done. I think memory has to do some stuff for each tick.
void clockTick (unsigned int tick) {
    for (int i = currentTick; i < currentTick + tick; i++) {
        cpuDoTick();
    }
}

void clockDump() {
    FILE* file = fopen("output.txt", "a");
    fprintf( file,"Clock: %d\n", currentTick );
    fclose(file);
    free(file);
}
