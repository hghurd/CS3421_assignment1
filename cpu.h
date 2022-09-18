/**
 * Author: Garrett Hurd
 * Username: hghurd
 * Filename: cpu.h
 * Date: 2022-09-18
 *
 * Description: This is the header file for cpu.c It includes all of the imported libraries cpu.c will use, and it has
 *              all of the function prototypes for cpu.c
 *
 */

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