#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int length;
    int array[];    //Flexible array member as its size is defined at run-time
};

int main()
{
    int iterator = 0;
    int desiredSize = 0;
    printf("Please enter the size of flex array: ");
    fflush(stdin);
    scanf("%d",&desiredSize);

    struct myArray* myArray1 = (struct myArray*)malloc(sizeof(struct myArray) + (desiredSize * sizeof(int)));
    myArray1->length = 55;
    
    for(iterator = 0; iterator<desiredSize; iterator++)
    {
        myArray1->array[iterator] = ((iterator+8)*8)-56;
        printf("Array Element %d = %d\n",iterator+1, myArray1->array[iterator]);
    }
    
    free(myArray1);
    
    return 0;
}
