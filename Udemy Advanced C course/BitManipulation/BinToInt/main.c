#include <stdio.h>
#include <math.h>

int covertBinaryToDecimal(long long n);

int main()
{
    long long n;
    int result = 0;

    printf("Enter binary number: ");
    scanf("%lld", &n);
    result = covertBinaryToDecimal(n);

    printf("\n%lld in binary = %d in Decimal", n, result);

    return 0;
}

int covertBinaryToDecimal(long long n)
{
    int decimal = 0, i = 0, reminder = 0;

    while(n != 0)
    {
        reminder = n % 10;      // Doing some tricky number with the remainder here.
        n = n/10;
        decimal += reminder*pow(2,i);
        ++i;
    }
    return decimal;
}