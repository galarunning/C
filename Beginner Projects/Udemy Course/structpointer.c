#include <stdio.h>
#include <string.h>

struct dairyFreeMilk
{
    int DFM_ID;
    char primaryMaterial[31];
};

typedef struct dairyFreeMilk DFM_Bottle;

int main()
{
    
    DFM_Bottle DFM_Bt1[3];
    DFM_Bottle* DFM_ptr;

    // Initialise the first element of the structure

    DFM_Bt1[0].DFM_ID = 100000;
    strcpy(DFM_Bt1[0].primaryMaterial, "Almond");

    //Read the initialised struct
    printf("DFM_Btl[0].DFM_ID = %d\n", DFM_Bt1[0].DFM_ID);
    printf("DFM_Btl[0].primaryMaterial = %s\n", DFM_Bt1[0].primaryMaterial);

    // Now I am going to do the same through a pointer!

    DFM_ptr = &DFM_Bt1[1];

    DFM_ptr->DFM_ID = 212121;
    strcpy(DFM_ptr->primaryMaterial,"Hazelnut");

    printf("DFM_Btl[1].DFM_ID = %d\n", DFM_ptr->DFM_ID);
    printf("DFM_Btl[1].primaryMaterial = %s\n", DFM_ptr->primaryMaterial);

    //The pointer knows of how many memory location it needs to increment!
    DFM_ptr++;

    DFM_ptr->DFM_ID = 5464;
    strcpy(DFM_ptr->primaryMaterial,"Coconut");

    printf("DFM_Btl[2].DFM_ID = %d\n", DFM_ptr->DFM_ID);
    printf("DFM_Btl[2].primaryMaterial = %s\n", DFM_ptr->primaryMaterial);

    return 0;
}