#include "Headers.h"


void printCalculator()
{

    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("************************ CALCULATOR *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n\n\n\n");
    return;
}

float* getInput(float* x)
{   
    x = (float*)malloc(sizeof(float));

    printf("Please enter the first number: ");
    fflush(stdin);
    scanf("%f", x);             // NOT &x because this is already a pointer! The pointer already contains the address of a variable

    return x;
}

float* getInput2(float* y)
{   
    y = (float*)malloc(sizeof(float));

    printf("Please enter the second number: ");
    fflush(stdin);
    scanf("%f", y);

    return y;
}

char getOperation()
{
    char operation;
    printf("Please insert your operatin:\n\n+\n-\n/\n*\n& --> Bitwise AND\n^ --> Bitwise OR\n");
    printf("Operation: ");

    fflush(stdin);
    scanf("%c", &operation);

return operation;
}

float* computeResult(float x, float y, char operation)
{
    //Using switch case

    float* results = (float*)malloc(sizeof(float));
    int bitwiseres;
    int xInt;
    int yInt;
    
    switch(operation)
    {
        case '+':
            printf("\nDoing the operation num1 + num2: ");
            *results = (x+y);
            break;

        case '-':
            printf("\nDoing the operation num1 - num2: ");
            *results = (x-y);
            break;
        
        case '/':

            printf("\nDoing the operation num1 / num2: ");
            *results = (x/y);
            break;

        case '*':

            printf("\nDoing the operation num1 * num2: ");
            *results = (x*y);
            break;
        
        case '&':

            printf("\nDoing the operation num1 & num2: ");
            xInt = (int) x;
            yInt = (int) y;
            
            bitwiseres = xInt & yInt;

            if(TEST_MODE == 1)
            {
                printf("\n\nConverting floats to ints:\nx: %d\ny: %d\n\n", x, y);
            }

            printf("Result: %d",bitwiseres);

            break;
            return NULL;  
        
        case '^':

            printf("\nDoing the operation num1^num2: ");
            xInt = (int) x;
            yInt = (int) y;

            if(TEST_MODE == 1)
            {
                printf("\n\nConverting floats to ints:\nx: %d\ny: %d\n\n", x, y);
            }
            
            bitwiseres = xInt ^ yInt;
            printf("Result: %d",bitwiseres);
            break;
            return NULL;  

        default:

            printf("\n I cannot do that operation yet!\n");
            break;
            return NULL;            
    }

    return results;
}

int askToContinue()
{
    char command;
    printf("\n\nTo Exit the program press E otherwise press any other character.\nCommand: ");
    fflush(stdin);
    scanf("%c", &command);

    if(command == 'E')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}