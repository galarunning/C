#include <stdio.h>

extern int loopCounter;

extern void display()
{
    printf("loopCounter = %d\n", loopCounter+1);
}
