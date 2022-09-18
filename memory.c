/**
 * Author: Garrett Hurd
 * Username: hghurd
 * Filename: memory.c
 * Date: 2022-09-18
 *
 * Description:
 *
 */

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
    FILE* file = fopen("output.txt", "a");
    //fprintf a bunch of stuff

/*    for (unsigned int i = address; i < address + count; i++) {
        printf( "%02X \n", *memory[i] );
    }*/

// Memory needs to get printed in a nice little grid layout, so it's not gonna be as easy as the stuff you did a
// couple lines up

    //Print the column legend on the top row(Addr 00 01 02 ... 0E 0F)
    printf( "Addr " );
    for (int i = 0; i < 16; i++) {
        printf( "%02X ", i);
    }

    int firstDigit = 0xF0;
    int currRow = 0x00;
    currRow = address && firstDigit;

    int numOfRows = (int) round(((double) count / 16) - currRow);

    for (int i = 0; i < numOfRows; i++) {
        for (int j = 0; j < 16; j++) {
            if (j == 0) {
                //At the beginning of each row, print the row legend at ont the left
                fprintf(file, "%02X", (currRow + 0x10));
            }

        }

    }

    fclose(file);
    free(file);

}

void memSet (int address, int count, unsigned char bytes[count]) {
    for (int i = address; i < address + count; i++) {
        memory[i] = &bytes[i - address];
    }
}



