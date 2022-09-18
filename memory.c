//
// Created by hghurd on 8/31/2022.
//

#include "memory.h"

unsigned char** memory = NULL;

void memCreate(unsigned int size) {
    memory = malloc(sizeof(char) * size);
}

void memReset() {
    //for loop to make each char == 0?
    for (int i = 0; i < sizeof(memory); i++) {
        memory[i] = 0;
    }
}

void memDump(int address, int count) {

/*    for (unsigned int i = address; i < address + count; i++) {
        printf( "%02X \n", *memory[i] );
    }*/

// Memory needs to get printed in a nice little grid layout, so it's not gonna be as easy as the stuff you did a
// couple lines up

    //Print the top row (Addr 00 01 02 ... 0E 0F)
    printf( "Addr " );
    for (int i = 0; i < 16; i++) {
        printf( "%02X ", i);
    }

}

void memSet (int address, int count, unsigned char bytes[count]) {
    for (int i = address; i < address + count; i++) {
        memory[i] = &bytes[i - address];
    }
}



