#include <stdio.h>

int x, y;
void Q();
void P(int);

int main()
{
    x = 7, y = 8;
    Q();
    printf("%d\n", x);

    return 0;
}

void Q()
{
    int x,y;
    x = 3; y = 4;
    P(y);
    printf("%d ",x);
}

void P(int n)
{
    x = n+2 / n-3;
}