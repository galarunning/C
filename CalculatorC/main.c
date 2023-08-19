#include "Utils.c"

int main()
{
    float f;
    float* results = &f;
    float* x;
    float* y;
    char operation;

    while(1 == 1)
    {
        // Main loop for the application
        printCalculator();
        x = getInput(x);
        y = getInput2(x);

        if(TEST_MODE == 1)
        {
            printf("\t\tThis is what you entered: %f\n\n",*x);
            printf("\t\tThis is what you entered: %f\n\n",*y);
        }

        operation = getOperation();

        if(TEST_MODE == 1)
        {
            printf("Address results is pointing to: 0x%x\nAddress of results: 0x%x",results, &results);
        }

        results = computeResult(*x, *y, operation);

        if(results == NULL)
        {
            printf("\nI will start again.\n");
            break;
        }

        printf("%f\n\n", *results);


        if(askToContinue() == 1)
        {
            if(TEST_MODE == 1)
            {
                printf("\nResults lives in Address: %p\n", results);
                printf("Num1 lives in Address: %p\n", x);
                printf("Num2 lives in Address: %p\n", y);  
            }
            
            free(x);
            free(y);
            free(results);
            if(TEST_MODE == 1)
            {
                printf("\n\n\nResults after memory is released: %p\n", results);
                printf("Num1 after memory is released: %p\n", x);
                printf("Num2 after memory is released: %p\n", y);  
            }
            printf("Memory de-allocated.\nExiting the program.");
            break;
        }
        
        printf("\nHere we go again :)\n\n");

    }
    return 0;
}   

