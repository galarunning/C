#include <stdio.h>
#include <stdlib.h>     // Here lives the rand() function
#include "header1.h"
#include "Utils.c"

/*
In this excercise I am trying to open the RandomNumbersLog.txt file in append mode
and append to it 100 random numbers from 0 to 32.
Each random number has a new line
(Initialise the random number generator with the local time of the computer)
Every time also print the number on the screen to admire it.
Then close the file.
*/

int main()
{
    unsigned short randomNum;
    FILE* filePtr;

    filePtr = fopen("ManyRandomNumbersLog.txt","a");

    for(int i = 0; i<100; i++)
    {
        randomNum = randomNumberGenerator();
        fprintf(filePtr,"%d\n",randomNum);
        printf("Writing %d into the text file\n\n",randomNum);
    }

    fclose(filePtr);    
    return 0;
}