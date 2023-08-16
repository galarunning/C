#include <stdio.h>
#include "header.h"
#include "untils.c"

#define     TEST_MODE

int main()
{
    printf("The life is beautiful\n");

    printf("A = %d\n",A);
    printf("22 squared = %d\n",SQ(22));       // This calculation happens in the preprocessor 
                                            // thus did not take ANY time in runtime or compilation

    #ifdef TEST_MODE
    printf("\nTest mode has been defined.\n");
    #endif  //TEST_MODE

    #ifndef TEST_MODE
    printf("\nTest mode has NOT been defined.\n");
    #endif  //TEST_MODE

    happyFunction();

    return 0;
}
