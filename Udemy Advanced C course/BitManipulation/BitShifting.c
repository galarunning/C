#include <stdio.h>

int main()
{
    unsigned int w1 = 0;
    int result = 0;

    result  = 1 << 30;   // Setting the first bit to 1
    printf("%d", result);

    result = 20 >> 1;
    printf("\n%d", result);

    //Always better to use unsigned integers to get a defined result!
    
    return 0;
}


