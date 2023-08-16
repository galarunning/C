#include "Header.h"
#include <stdio.h>

void dotFound(void)
{
    FILE* filePtr;
    char line_write[100] = "I am so happy I found the dot!";

    filePtr = fopen("Happy today.txt","w");
    fprintf(filePtr,line_write);
    fclose(filePtr);

}