#include <stdio.h>

void printArr(int* arr, int arrSize);

int main()
{
    int arrOfInts[6] = {1222,1567,15687,864,8795,4568};
    //int* arrPtr = arrOfInts;            // This is the same as saying &arrOfInts[0]
    
    int arrSize = sizeof(arrOfInts) / sizeof(arrOfInts[0]);

    //Only the name of the array is a pointer!!! Can make it so confusing.    
    printArr(arrOfInts, arrSize);

    return 0;
}

void printArr(int* arr, int arrSize)
{
    int count;

    for(count = 0;count<arrSize;count++)
    {
        printf("\nElement: %d: %d", count, *(arr + count));
    }
}