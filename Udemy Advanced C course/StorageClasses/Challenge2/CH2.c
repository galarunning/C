#include <stdio.h>

void sum(int numToAdd);

int main()
{
    sum(10);
    sum(45);
    sum(70);

    return 0;
}

void sum(int numToAdd)
{
    static int sum;
    sum += numToAdd;
    printf("SUM = %d\n", sum);
}