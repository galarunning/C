#include <stdio.h>

// void add_book(book)
// {
	
// }


int main()
{
	
	int access;
	char a;
	struct database{
		char title[50];
		int copies;
		char author[50];
		};
	
	char b;	
	
	printf("Welcome to the Library database!\n\nTo enter press 1: ");
	scanf(" %d",&a);				// Need to add a white space as scanf takes the \n from the previous time it was used.
	
	// Test to check if the user wants to enter the database
	if (a != 1)
	{
		printf("\n\nThe program will terminate!\n\n+++++++ BYEEEE ++++++++");
	}
	else
	{
		access = 1;
		
		//Entering the infinite loop where the program lives! :)
		struct database db1[10];
		
		while(access==1)
		{
			
			printf("\n\n*********************************************\n");
			printf("*********************************************\n");
			printf("*********************************************\n");
			printf("************** Library Database *************\n");
			printf("*********************************************\n");
			printf("*********************************************\n");
			printf("*********************************************\n\n\n\n\n");
			
			printf("INSTRUCTIONS:\n\n");
			
			printf("- Enter A if you want to add a book to the database\n");
			printf("- Enter B if you want to DELETE a book\n");
			printf("- Enter P if you want to PRINT the database\n");
			printf("- Enter Z to exit the program\n");
			printf("\nUSER INPUT: ");
			
			scanf(" %c",&b);
			
			// Putting some default data into the database
			
			if(b == 'A')
			{
				printf("Adding Book\n\n");

			}
			else if(b =='B')
			{
				printf("Deleting Book\n\n");
			}
			else if(b =='P')
			{
				printf("Printing database:\n\n");
				printf(db1);
			}
			else if(b == 'Z')
			{
				printf("The program will exit!\n\n");
				access = 0;
			}
			else
			{
				printf("\nCOMMAND NOT RECOGNISED!\n TRY AGAIN\n\n");
			}
		}
	}
	//scanf(" %d");

	return 0;
}
