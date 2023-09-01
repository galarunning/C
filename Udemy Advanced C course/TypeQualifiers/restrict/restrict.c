#include <stdio.h>
#include <malloc.h>

int main()
{
    /* 
    restrict is NOT supported by C++ and is an hint for the compiler 
    optimisation. It is used for pointers declarations as a type qualifiers
    It tells the compiler that the pointer is the ONLY REFERENCE to that DATA.
        * The same value is not referenced by any other pointer or variable in the same scope
        * The pointer is the sole initial means of accessing a data object.

    It tells the compiler not to add any particular checks.
    */

   int array[10];
   int *restrict restar = (int*)malloc(10*sizeof(int));
   int *par = array;        // This is not qualified as restrict

    for(int i; i < 10; i++)
    {
        array[i] += 6;
        restar[i] += 6;
        par[i] += 6;

        array[i] += 6;
        restar[i] += 6;        // For restar the compiler will just translate into one single
        // Assembly instructions of incrementing the value by 12. whilst for the other cases will have created two instructions.
        par[i] += 6;

    }


    return 0;
}