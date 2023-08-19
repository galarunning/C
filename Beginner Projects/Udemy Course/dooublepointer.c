#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 9;
    
    int* ptr = &a;
    int** dbl_ptr = &ptr;

    printf("%x %x %x", &a, &ptr, dbl_ptr);

    return 0;
}