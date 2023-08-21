#include <stdio.h>

void sumOfArray(int myArray[]);

int main()
{
    size_t arraySize = 0;
    int i = 0;
    int sum;
    printf("Please enter the size of your array: ");
    fflush(stdin);
    scanf("%zd", &arraySize);
    int myArray[arraySize];

    for(i = 0;i<arraySize;i++)
    {
        printf("Enter the element %d: ", i+1);
        fflush(stdin);
        scanf("%d", &myArray[i]);
    }

    for(i = 0; i<arraySize; i++)
    {
        sum += myArray[i];
    }

    printf("\nSUM = %d",sum);

    return 0;
}

// void sumOfArray(int myArray[])
// {
//     int i = 0;
//     int sum;
//     int arraySize = (sizeof(myArray)/sizeof(int));

//     for(i = 0;i<arraySize;i++)
//     {
//         printf("Enter the element &d: ", i+1);
//         fflush(stdin);
//         scanf("%d", myArray[i]);
//     }
//     for(i = 0; i<arraySize; i++)
//     {
//         sum += myArray[i];
//     }

//     printf("\n\nSUM = %d",sum);
// }