//
// Created by hghurd on 2022-09-08.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cpu.h"
#include "memory.h"
#include "clock.h"

int main (int args, char** argv) {
    //open file

    FILE* file = fopen(argv[1], "r");
    char* command = NULL;
    fscanf(file, "%s ", command);

    if (strcmp(command, "clock") == 0) {
        fscanf(file, "%s ", command);
        if (strcmp(command, "reset") == 0) {

        }
        else if (strcmp(command, "tick") == 0) {

        }
        else if (strcmp(command, "dump") == 0) {

        }
        else {
            printf( "Invalid input \n" );
            break;
        }
    }
    else if (strcmp(command, "memory") == 0) {
        fscanf(file, "%s ", command);
        if (strcmp(command, "create") == 0) {

        }
        else if (strcmp(command, "reset") == 0) {

        }
        else if (strcmp(command, "dump") == 0) {

        }
        else if (strcmp(command, "set") == 0) {

        }
        else {
            printf( "Invalid input \n" );
            break;
        }
    }
    else if (strcmp(command, "cpu") == 0) {
        /* cpuParseCommand(arg);
        it should work;.bigpp();;;;;;;;;
        */
        fscanf(file, "%s ", command);

    }
    else {
        printf("You stoopid \n");
    }

}
//read in the first command
//the first 'token' should tell you which .c file needs to do stuff

//close file