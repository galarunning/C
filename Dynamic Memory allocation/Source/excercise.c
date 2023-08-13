#include "ExcerciseUtils.c"

int main()
{
    int capacity = 0;
    customers* people;
    char instruction;

    while(1 == 1)
    {
        // Beginning of the user input
        printf("\n\nINSTRUCTIONS\n\nEnter:\nA -> to add a new customer\n");
        printf("P -> to print all customers\nQ -> to quit the program\n");

        printf("\nPlease enter your command here: ");
        fflush(stdin);
        scanf("%c",&instruction);

        if(instruction == 'A' | instruction == 'a')
        {
            if(capacity == 0)
            {
                people = (customers*)malloc(capacity*sizeof(customers));        //Allocate the right amount of memeory

                if(people == NULL)
                {
                    printf("ERROR: Could not allocate enough mememory!");
                    return -1;
                }
                else
                {
                    printf("\nSuccess! %d bytes of memory allocated to the RAM\n",sizeof(customers));
                }
                
                askDetails(people,capacity);        //Ask for all the input information
                capacity++;
            }
            else
            {              
                people = (customers*)realloc(people,capacity*sizeof(customers));    //Expanding the RAM memory used
                
                if(people == NULL)
                {
                    printf("ERROR: Could not allocate enough mememory!");
                    return -1;
                }
                else
                {
                    printf("\nSuccess! %d bytes of memory allocated to the RAM\n",capacity*sizeof(customers));
                }

                askDetails(people,capacity);        //Ask for all the input information
                capacity++;
            }
        }
        else if(instruction == 'P' | instruction == 'p')
        {
            //people -= capacity;
            printAllCustomers(people,capacity);         // Printing all the customers on the screen
            continue;                                   // Skipping the rest of the loop
        }
        else if(instruction == 'Q' | instruction == 'q')
        {
            free(people);                               // Free the memory before terminating the program
            printf("\n\nExiting the Program\n\n");
            break;
        }
        else
        {
            printf("\nYour input is not valid. Please follow the instructions below\n\n");
        }
    }
    return 0;
}
