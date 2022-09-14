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
void setReg();
void dump();

void doTick(struct CPU cpu) {
    for (int i = 7; i >= 0; i--) {
        cpu.regs[i] = cpu.regs[i+1];
    }
}

//CPU parse function
//char math
//
