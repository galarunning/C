#include <stdio.h>

int main(int argc, char **argv)
{

    int a;
    int b;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("Results of OR: %x\n",a|b);
    printf("Results of AND: %x\n",a&b);
    printf("Results of XOR: %x\n",a^b);
    printf("%d\n%d\n",a,b);
    printf("Results of inverted 1: %x and 2: %x\n",~a,~b);
    
    return 0;
}