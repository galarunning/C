#include <stdlib.h>
#include "header1.h"

unsigned short randomNumberGenerator(void)
{
    unsigned short randomInt = (unsigned short)rand()%MAX_NUM;
    return randomInt;
}