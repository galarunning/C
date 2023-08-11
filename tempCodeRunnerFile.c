#include <stdio.h>

int main()
{
    int a[] = {10,20,30,40,50};

    printf("%u  %u\t%u", sizeof(a[1]), sizeof(*a), sizeof(a));


    return 0;
}