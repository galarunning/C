#include <stdio.h>

#define TEST_MODE       1
#define INPUTS          1

int* askForNumbers(int* numPtr);
void doTheMath(int* num1, int* num2);

int main()
{
    int num1;
    int num2;
    int loopVariable = 1;
    
    int* ptr_Input1 = &num1;
    int* ptr_Input2 = &num2;
    

    while(loopVariable)
    {
        ptr_Input1 = askForNumbers(ptr_Input1);
        ptr_Input2 = askForNumbers(ptr_Input2);

        if(TEST_MODE == 1)
        {
            printf("\n\nFirst Number Entered: %d",*ptr_Input1);
            printf("\n\nSecond Number Entered: %d",*ptr_Input2);
        }

        doTheMath(ptr_Input1, ptr_Input2);

        printf("\n\nTo perform another operation enter anything otherwise enter 0: ");
        fflush(stdin);
        scanf("%d", &loopVariable);
    }

    return 0;
}

int* askForNumbers(int* numPtr)
{

    printf("Please Insert a number: ");
    fflush(stdin);
    scanf("%d", numPtr);

    if(TEST_MODE == 1)
    {
        printf("\n\n\nTEST MODE ONLY:");
        printf("\n\nNUM 1 = %d\n",*(numPtr));
    }

    return numPtr;
}

void doTheMath(int* num1, int* num2)
{
    char operation;
    int num;

    printf("\n\n\nChoose the bitwise operation to do: \n\n& --> AND \n| --> OR\n^ --> XOR\n<< --> Shift left (you will be asked by how many bits) \n<< --> Shift right (you will be asked by how many bits)\n~  --> Flipping bits\n");
    printf("\nOperation:");
    fflush(stdin);
    scanf("%c", &operation);

    switch(operation)
    {
        case '&':

            printf("\nResult of %d & %d = %d\n\n", *num1, *num2, (*num1)&(*num2));
            break;

        case '|':

            printf("\nResult of %d & %d = %d\n\n", *num1, *num2, (*num1)|(*num2));
            break;

        case '^':

            printf("\nResult of %d & %d = %d\n\n", *num1, *num2, (*num1)^(*num2));
            break;

        case '<':

            printf("\nPlease enter the number of bits to shift left: ");
            fflush(stdin);
            scanf("%d", &num);
            printf("Result of %d << %d = %d\n", *num1, num, (*num1) << num);
            printf("Result of %d << %d = %d\n\n", *num2, num, (*num2) << num);
            break;
        case '>':

            printf("\nPlease enter the number of bits to shift right: ");
            fflush(stdin);
            scanf("%d", &num);
            printf("Result of %d >> %d = %d\n", *num1, num, (*num1) >> num);
            printf("Result of %d >> %d = %d\n\n", *num2, num, (*num2) << num);
            break;

        case '~':

            printf("\nResult of ~%d = %d\n\n", *num1, ~(*num1));
            printf("\nResult of ~%d = %d\n\n", *num2, ~(*num2));
            break;

        default:
        
            printf("\nNot running Correctly\n\n");
    }

}

