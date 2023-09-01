#include <stdio.h>


long long convertDecimalToBinary(int n);

int main()
{
    long long result;
    int n = 0;

    printf("Please enter the Decimal number to convert: ");
    fflush(stdin);
    scanf("%d",&n);

    result = convertDecimalToBinary(n);
    printf("\nDecimal %d = %lld in Binary\n", n, result);
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long result = 0;
    int remainder, i = 1;

    while( n != 0)
    {
        remainder = n % 2;
        n = n/2;
        result += remainder*i;
        i = i*10;
    }
    
    return result;
}