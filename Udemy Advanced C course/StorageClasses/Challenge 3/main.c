#include <stdio.h>
#include <stdlib.h>

int loopCounter;
extern void display();

int main()
{
    for(loopCounter = 0; loopCounter<5; loopCounter++)
    {
        display();
    }

    return 0;
}