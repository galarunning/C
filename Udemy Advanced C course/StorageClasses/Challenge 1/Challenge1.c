#include <stdio.h>
#include <stdlib.h>

double variable;
extern void fun(void);
void fun1(void);

int main()
{
    float* permanentStorage = (float*)malloc(sizeof(float));
    register int a;
    
    {
        /* This is a code block! It has its own scope!*/
        int tmp = 68;
        printf("%d\n", tmp);
    }
    fun();
    


    return 0;
}

void fun1(void)
{

    printf("I am a pretty function\n");
    printf("I am a pretty function\n");
}