#include "excercise.h"

void askDetails(customers* person, int capacity)
{
    
    printf("\n\nCustomer Number %d\n", capacity+1);
    printf("Please enter your Name: ");
    fflush(stdin);
    scanf("%s",person[capacity].name);

    printf("Please enter your Last Name: ");
    fflush(stdin);
    scanf("%s",person[capacity].lastName);

    printf("Please enter your Phone Number: ");
    fflush(stdin);
    scanf("%s",person[capacity].phoneNumber);
}   

void printAllCustomers(customers* person, int capacity)
{
    int i;

    printf("Printing all customers:\n\n");

    for(i = 0; i<capacity; i++)
    {
        // In this function I am using th array indexing notation instead
        printf("\n\nCustomer Number: %d\n",i+1);
        printf("First Name: %s\n", person[i].name);
        printf("Last Name: %s\n", person[i].lastName);
        printf("Phone Number: %s\n", person[i].phoneNumber);
    }
}