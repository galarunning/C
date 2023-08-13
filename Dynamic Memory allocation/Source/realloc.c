#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//keep in mind memeory fragmentation when using realloc!!!

int main()
{
    int *memoryBlockPtr;

    memoryBlockPtr = (int*)calloc(3,sizeof(int));

    printf("MemoryBlockPtr[0] contains ox%x in location 0x%x\n",memoryBlockPtr[0],&memoryBlockPtr[0]);
    printf("MemoryBlockPtr[1] contains ox%x in location 0x%x\n",memoryBlockPtr[1],&memoryBlockPtr[1]);
    printf("MemoryBlockPtr[2] contains ox%x in location 0x%x\n",memoryBlockPtr[2],&memoryBlockPtr[2]);
    
    memoryBlockPtr[0] = 1;
    memoryBlockPtr[1] = 2;
    memoryBlockPtr[2] = 3;

    
    printf("\n\nMemoryBlockPtr[0] contains ox%x in location 0x%x\n",memoryBlockPtr[0],&memoryBlockPtr[0]);
    printf("MemoryBlockPtr[1] contains ox%x in location 0x%x\n",memoryBlockPtr[1],&memoryBlockPtr[1]);
    printf("MemoryBlockPtr[2] contains ox%x in location 0x%x\n",memoryBlockPtr[2],&memoryBlockPtr[2]);
    

    realloc(memoryBlockPtr, 5*sizeof(int));  //Saying I want 5 lots if ints instead of 3 as I did before.
    
    memoryBlockPtr[3] = 4;
    memoryBlockPtr[4] = 5;

    printf("\n\nMemoryBlockPtr[0] contains 0x%x in location 0x%x\n",memoryBlockPtr[0],&memoryBlockPtr[0]);
    printf("MemoryBlockPtr[1] contains 0x%x in location 0x%x\n",memoryBlockPtr[1],&memoryBlockPtr[1]);
    printf("MemoryBlockPtr[2] contains 0x%x in location 0x%x\n",memoryBlockPtr[2],&memoryBlockPtr[2]);
    printf("MemoryBlockPtr[3] contains 0x%x in location 0x%x\n",memoryBlockPtr[3],&memoryBlockPtr[3]);
    printf("MemoryBlockPtr[4] contains 0x%x in location 0x%x\n",memoryBlockPtr[4],&memoryBlockPtr[4]);

    // Freeing the memory
    free(memoryBlockPtr);
    return 0;
}