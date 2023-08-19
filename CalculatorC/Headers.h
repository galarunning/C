#ifndef HEADERS_H_
#define HEADERS_H_
#endif

#define TEST_MODE        1

#include <stdio.h>
#include <stdlib.h>

//Define constants and functions prototypes
void printCalculator();

float* getInput(float* x);

float* getInput2(float* y );

char getOperation();

float* computeResult(float x, float y, char operation);
