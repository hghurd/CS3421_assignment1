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
//#include "cpu_internal.h"

struct CPU {
    unsigned char regs[8];
    unsigned char PC;
};

struct CPU cpu;
unsigned char fetchByte;
bool fetchDone;


int findRegIndex(char *reg);


//char math
int findRegIndex(char *reg) {
    return (int) (reg[1] - 'A');
}

char findRegName(int index) {
    return (char)('A' + index);
}

//CPU parse function?