//
// Created by hghurd on 8/31/2022.
//

#ifndef ASSIGNMENT1_MEMORY_H
#define ASSIGNMENT1_MEMORY_H

#endif //ASSIGNMENT1_MEMORY_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void memCreate(unsigned int size);
void memReset();
void memDump(int address, int count);
void memSet(int address, int count, unsigned char bytes[count]);