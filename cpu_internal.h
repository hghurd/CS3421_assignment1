//
// Created by hghurd on 9/2/2022.
//

#ifndef ASSIGNMENT1_CPU_INTERNAL_H
#define ASSIGNMENT1_CPU_INTERNAL_H

#endif //ASSIGNMENT1_CPU_INTERNAL_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>



typedef struct Register {
    char *registerName;
    unsigned char *byteValue;
    struct Register *nextRegister;
}reg;

/**
 * This function will take a string and an integer and use those variables to name the
 * register. i.e.: the first register will be named "RA", the next one "RB", ..., to "RH"
 *
 * @param name pointer to a string
 * @param registerNumber the number register that needs a name
 */

void createRegisters (struct Register *firstRegister);
void makeRegister(struct Register *newFirstRegister, struct Register *firstRegister);
void generateRegisterName(char **name, int registerNumber);
void shiftDown(struct Register *firstRegister);



void createRegisters (struct Register *firstRegister) {

    struct Register *currentRegister, *temp;

    //This was adapted from https://www.codevscolor.com/c-program-create-iterate-linked-list

    //This loop creates and initializes all the memory registers.
    for (int i = 0; i < 8; i++) {
        currentRegister = (reg *)malloc(sizeof (reg));
        char* name = NULL;
        generateRegisterName(&name, (i + 1));
        if (name != NULL) {
            strcpy(currentRegister->registerName, name);
        }
        currentRegister->byteValue = 0;

        if (i == 0) {
            firstRegister = temp = currentRegister;
        }
        else {
            temp->nextRegister = currentRegister;
            temp = currentRegister;
        }

    }

    temp->nextRegister = NULL;
    temp = firstRegister;

}

void makeRegister(struct Register *newFirstRegister, struct Register *firstRegister) {
    newFirstRegister->nextRegister = firstRegister;
    struct Register *temp = firstRegister;
    for (int i = 0; i < 8; i++){
        char* name = NULL;
        generateRegisterName(&name, (i + 1));
        if (name != NULL) {
            strcpy(temp->registerName, name);
        }
        if ((i == 7) && (temp->nextRegister != NULL)) {
            temp->nextRegister = NULL;
        }
        temp = temp->nextRegister;
    }
}


void generateRegisterName(char **name, int registerNumber){
    switch (registerNumber) {
        case 1:
            strcpy(*name, "RA");
            break;
        case 2:
            strcpy(*name, "RB");
            break;
        case 3:
            strcpy(*name, "RC");
            break;
        case 4:
            strcpy(*name, "RD");
            break;
        case 5:
            strcpy(*name, "RE");
            break;
        case 6:
            strcpy(*name, "RF");
            break;
        case 7:
            strcpy(*name, "RG");
            break;
        case 8:
            strcpy(*name, "RH");
            break;
        default:
            name = NULL;
            break;
    }
}

void shiftDown(struct Register *firstRegister){
    struct Register *temp;
    temp = 0;
}

