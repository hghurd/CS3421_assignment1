//
// Created by hghurd on 8/31/2022.
//

#include "cpu.h"

void reset();
void cpuSetReg(char *reg, unsigned char byte);
void cpuDump();
void cpuDoTick(); // Needs to shift everything down one register, then it has to do more stuff. Look it up
void memStartFetch(unsigned int address, unsigned int count, unsigned char *dataPtr, bool *memDonePtr);


void reset() {
    for (int i = 0; i < 8; i++) {
        cpu.regs[i] = 0;
    }
    cpu.PC = 0;
}

//Tinker with these parameters! I dunno if they're right or not.
void cpuSetReg(char *reg, unsigned char byte) {
    if (strcmp(reg, "PC") == 0) {
        //Set PC to the unsigned char
        cpu.PC = byte;
    }
    else {
        char a = 'A';
        char regIndex = reg[1] - a;
        cpu.regs[regIndex] = byte;
    }
}

void cpuDump() {
    printf( "PC: %02X \n", cpu.PC );
    for (int i = 0; i < 8; i++) {
        printf( "R%c: %02X \n", findRegName(i),cpu.regs[i]);
    }
}

void cpuDoTick() {
    for (int i = 7; i >= 0; i--) {
        cpu.regs[i] = cpu.regs[i+1];
    }
}

