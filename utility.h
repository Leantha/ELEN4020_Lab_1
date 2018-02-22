#ifndef UTILITY_H
#define UTILITY_H

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include "math.h"

/*-----------------------------*/
// Calculations
/*-----------------------------*/
int numberFromPercent(int size, int percentage);

int sizeOfArray(int *bounds, int dimensions);

int randomElementinRange(int range);

int *calculateIndex(int *bounds, int dimensions, int linearIndex, int A_size);
/*-----------------------------*/
// Operations on Data
/*-----------------------------*/
void setOnes(int *ptr_A);

void setZeros(int *ptr_A);

void allocateArray(int **ptr_p_A ,int size);

void deleteArray(int *ptr_A);

/*-----------------------------*/
// Presentation
/*-----------------------------*/
void printSeries(int *ptr, int size, bool index);

#endif

