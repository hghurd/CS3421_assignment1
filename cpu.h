//
// Created by hghurd on 8/31/2022.
//

#ifndef ASSIGNMENT1_CPU_H
#define ASSIGNMENT1_CPU_H

#endif //ASSIGNMENT1_CPU_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


//Might have to move these?
//Also, ask if having global variables here is appropriate?
unsigned char fetchByte;
bool fetchDone;

void cpuReset();
void cpuSetReg(char *reg, unsigned char byte);
void cpuDump();
void cpuDoTick();
void memStartFetch(unsigned int address, unsigned int count, unsigned char *dataPtr, bool *memDonePtr);




//CPU parse function?