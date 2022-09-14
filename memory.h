//
// Created by hghurd on 8/31/2022.
//

#ifndef ASSIGNMENT1_MEMORY_H
#define ASSIGNMENT1_MEMORY_H

#endif //ASSIGNMENT1_MEMORY_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "memory_internal.h"

typedef struct {
    unsigned char *registers;
    unsigned int progCount;
}Memory;