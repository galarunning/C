#ifndef EXCERCISE_H_INCLUDED
#define EXCERCISE_H_INCLUDED
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Customer 
{
    char name[61];
    char lastName[61];
    char phoneNumber[19];
};

typedef struct Customer customers;

//Function to ask for name, surname and phone number
void askDetails(customers* person, int capacity);

void printAllCustomers(customers* person, int capacity);

