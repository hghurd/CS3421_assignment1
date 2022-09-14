//
// Created by hghurd on 8/31/2022.
//

#include "cpu.h"

struct CPU {
    unsigned char regs[8];
    unsigned char PC;
};

unsigned char fetchByte;
bool fetchDone;

void memStartFetch(unsigned int address, unsigned int count, unsigned char *dataPointer, bool *memDonePointer);
void doTick(struct CPU cpu); // Needs to shift everything down one register, then it has to do more stuff. Look it up
                             // in the assignment page
void reset();
void setReg(char* reg, unsigned char byte);
void dump();

void reset() {
    struct CPU cpu;
    for (int i = 0; i < 8; i++) {
        cpu.regs[i] = 0;
    }
    cpu.PC = 0;
}

void doTick(struct CPU cpu) {
    for (int i = 7; i >= 0; i--) {
        cpu.regs[i] = cpu.regs[i+1];
    }
}

//CPU parse function
//char math
//
