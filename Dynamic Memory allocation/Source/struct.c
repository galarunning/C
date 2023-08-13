#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PL_bttl_Type
{
    unsigned short mlCapacity;
    char material[51];
};

typedef struct PL_bttl_Type btl;

int main()
{
    int numofBottles;
    int i;
    btl *bottlePtr;

    printf("How many bottles do you want?: ");
    fflush(stdin);
    scanf("%d", &numofBottles);

    //dynamically allocate memory to hold numOfBottles btl elements
    bottlePtr = (btl*) malloc(numofBottles*sizeof(btl));

    if(bottlePtr ==NULL)
    {
        printf("You tried to allocate too much memory!");
        return (-1);
    }

    for(i=0; i<numofBottles; i++)
    {
        bottlePtr[i].mlCapacity = (i*3)+1;
        strcpy(bottlePtr[i].material,"PET");
    }

    // for(i=0; i<numofBottles; i++)
    // {
    //     printf("\nElement %d: %d ml.", i, bottlePtr[i].mlCapacity);
    //     printf(" and %s material", bottlePtr[i].material);
    // }

    printf("Press <Enter> to free the memory.");            // Before pressing enter check Task manager!
    fflush(stdin);
    getchar();

    free(bottlePtr);

    return 0;
}