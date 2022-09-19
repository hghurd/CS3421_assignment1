/**
 * Author: Garrett Hurd
 * Username: hghurd
 * Filename: cs3421_emul.c
 * Date: 2022-09-18
 *
 * Description:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cpu.h"
#include "memory.h"
#include "clock.h"

int main (int argc, char** argv) {

    FILE *file = fopen(argv[1], "r");
    char *command = NULL;
    fscanf(file, "%s ", command);

    if (strcmp(command, "clock") == 0) {
        fscanf(file, "%s ", command);
        if (strcmp(command, "reset") == 0) {
            clockReset();
        }
        else if (strcmp(command, "tick") == 0) {
            int numTicks = 0;
            fscanf(file, "%d", &numTicks);
            clockTick(numTicks);
        }
        else if (strcmp(command, "dump") == 0) {
            clockDump();
        }
        else {
            printf( "Invalid input \n" );
            return 1;
        }
    }
    else if (strcmp(command, "memory") == 0) {
        fscanf(file, "%s ", command);
        if (strcmp(command, "create") == 0) {
            int size = 0;
            fscanf(file, "%d", &size);
            memCreate(size);
        }
        else if (strcmp(command, "reset") == 0) {
            memReset();
        }
        else if (strcmp(command, "dump") == 0) {
            //get starting address
            //get number of bytes to print
            int startAddr = 0;
            int count = 0;
            fscanf(file, "%d", &startAddr);
            fscanf(file, "%d", &count);
            memDump(startAddr, count);
        }
        else if (strcmp(command, "set") == 0) {
            int startAddr = 0, count = 0, tempInput = 0;
            unsigned char inputArray[count];
            fscanf(file, "%d", &startAddr);
            fscanf(file, "%d", &count);

            for (int i = 0; i < count; i++) {
                fscanf(file, "%d", &tempInput);
                inputArray[i] = (unsigned char) tempInput;
            }
            memSet(startAddr, count, inputArray);
        }
        else {
            printf( "Invalid input \n" );
            return 1;
        }
    }
    else if (strcmp(command, "cpu") == 0) {
        /* cpuParseCommand(arg);
        it should work;.bigpp();;;;;;;;;
        */
        fscanf(file, "%s ", command);
        if (strcmp(command, "reset") == 0) {
            cpuReset();
        }
        else if (strcmp(command, "set") == 0) {
            char** reg = NULL;
            char* inValue = NULL;
            fscanf(file, "%s", *reg);
            fscanf(file, "%s", inValue);
            cpuSetReg(*reg, *inValue);
        }
        else if (strcmp(command, "dump") == 0) {
            cpuDump();
        }
        else {
            printf("Invalid input \n");
            return 1;
        }

    }
    else {
        printf("You stoopid \n");
        return 1;
    }
    fclose(file);
    free(file);
    return 0;
}
