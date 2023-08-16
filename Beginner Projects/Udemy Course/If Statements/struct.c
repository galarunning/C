#include <stdio.h>
#include <stdlib.h>			// For functions like malloc etc.
#include <string.h>			//Functions for strings such as strcat or strcopy

// #include <ctype.h> This is needed to implement functions for chars

#define STRLEN		50

void printHi(void);			//Function prototype or function declaration

int main()
{
	int a;
	
	a = 50;
	
	printf("Hi from the main program.\n");
	printf("a = %d it lives in: 0x%p\n",a, &a);
	
	printHi();

	printf("\nHi from the main program.\n");
	printf("a = %d it lives in: 0x%p\n",a, &a);
	
	return 0;
}


// Function definition
void printHi()
{
	int a = 1;
	
	printf("\n\nHi from the inside the program\n");
	printf("Inside this function a = %d it lives in: 0x%p\n",a, &a);
}