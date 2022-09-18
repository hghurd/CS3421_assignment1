/**
 * Author: Garrett Hurd
 * Username: hghurd
 * Filename: memory.h
 * Date: 2022-09-18
 *
 * Description: This is the header file for memory.c It includes all of the imported libraries memory.c will use, and it
 *              has all of the function prototypes for memory.c
 *
 */

#ifndef ASSIGNMENT1_MEMORY_H
#define ASSIGNMENT1_MEMORY_H

#endif //ASSIGNMENT1_MEMORY_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void memCreate(unsigned int size);
void memReset();
void memDump(int address, int count);
void memSet(int address, int count, unsigned char bytes[count]);