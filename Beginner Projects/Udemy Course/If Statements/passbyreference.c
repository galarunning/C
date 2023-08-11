#include <stdio.h>

void printFunc(int* a); //prototye

int main()
{
	
	int toPrintInt = 9000;
	int* ptr_toPrintInt = &toPrintInt;
	
	printf("\nFrom main before function %d", toPrintInt);
	
	printFunc(ptr_toPrintInt);
	
	printf("\nFrom main AFTER function %d", toPrintInt);
	
	return 0;
}

void printFunc(int* a)
{
	printf("\nFrom function %d", *a);
	
	*a = 4000;
	
	printf("\nFrom function (after mod) %d", *a);
}