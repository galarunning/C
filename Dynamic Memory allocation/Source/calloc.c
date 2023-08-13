#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *memoryBlockPtr;

    //calloc is used for allocating memory block for an array of NUM elements
    // each element is size bytes long
    // All elements are initialised with value 0
    // Return a pointer to the beginning of that memeory block if succesful if not returns NULL

    memoryBlockPtr = (int*)calloc(3,sizeof(int));

    printf("memoryBlockPtr[0]: contains 0x%x\n",memoryBlockPtr[0]);
    printf("memoryBlockPtr[1]: contains 0x%x\n",memoryBlockPtr[1]);
    printf("memoryBlockPtr[2]: contains 0x%x\n\n\n",memoryBlockPtr[2]);

    //Array indexing
    // memoryBlockPtr[0] = 1;
    // memoryBlockPtr[1] = 2;
    // memoryBlockPtr[2] = 3;

    //Allocating memory incrementing the pointer
    *memoryBlockPtr = 1;
    memoryBlockPtr++;
    *memoryBlockPtr = 2;
    memoryBlockPtr++;
    *memoryBlockPtr = 3;

    memoryBlockPtr--;
    memoryBlockPtr--;

    // printf("memoryBlockPtr[0]: contains 0x%x\n",memoryBlockPtr[0]);
    // printf("memoryBlockPtr[1]: contains 0x%x\n",memoryBlockPtr[1]);
    // printf("memoryBlockPtr[2]: contains 0x%x\n",memoryBlockPtr[2]);

    printf("memoryBlockPtr[0]: contains 0x%x\n",*memoryBlockPtr);
    memoryBlockPtr++;
    printf("memoryBlockPtr[1]: contains 0x%x\n",*memoryBlockPtr);
    memoryBlockPtr++;
    printf("memoryBlockPtr[2]: contains 0x%x\n",*memoryBlockPtr);


    return 0;
}