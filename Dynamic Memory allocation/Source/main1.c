#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOfElements;
    int i;
    int* ptr;

    printf("How many element do you want: ");
    
    // Always flush the input buffer before using scanf function
    fflush(stdin);
    scanf("%d", &numOfElements);

    ptr = (int*)malloc(numOfElements*sizeof(int));

    //Populate the array
    for(i=0;i<numOfElements;i++)
    {
        ptr[i] = i*2;

    }

    for(i=0;i<numOfElements;i++)
    {
        printf("Element [%d] = %d\n\n", i+1, ptr[i]);
    }

    free(ptr);

    return 0;
}