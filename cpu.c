/**
 * Author: Garrett Hurd
 * Username: hghurd
 * Filename: cpu.c
 * Date: 2022-09-18
 *
 * Description:
 *
 */

#include "cpu.h"

static int findRegIndex(char *reg);
static char findRegName(int index);

struct CPU {
    unsigned char regs[8];
    unsigned char PC;
};

struct CPU cpu;

void cpuReset() {
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
        int regIndex = reg[1] - 'A';
        cpu.regs[regIndex] = byte;
    }
}

void cpuDump() {
    FILE* file = fopen("output.txt", "a");
    fprintf( file,"PC: %02X \n", cpu.PC );
    for (int i = 0; i < 8; i++) {
        fprintf( file, "R%c: %02X \n", findRegName(i),cpu.regs[i]);
    }
    fclose(file);
    free(file);
}


static int findRegIndex(char *reg) {
    return (int) (reg[1] - 'A');
}

static char findRegName(int index) {
    return (char)('A' + index);
}


void cpuDoTick() {
    for (int i = 7; i >= 0; i--) {
        cpu.regs[i] = cpu.regs[i+1];
    }
    cpu.PC++;
}

