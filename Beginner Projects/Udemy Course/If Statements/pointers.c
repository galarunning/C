#include <stdio.h>

//Pointers and arrays
// You can only pass arrays by reference rather than by value.


int main()
{
	
	char arr[12] = {'H','e', 'l','l','o', ' ','W','o', 'r','l','d', '!'};
	int count;
	
	char* arrPtr = &arr[0];		//Declaring and initialising the pointer array.
	
	int arrint[3] = {1,2,3};
	int* arr_ptr = &arrint[0];
	
	printf("\n\nPrinting from array reference:");
	
	for(count = 0; count<12; count++)
	{
		printf("\n%c from 0x%x", arr[count],&arr[count] );
	}
	
	printf("\n\nPrinting from pointer reference:");
	
	
	// This would also work for an array of ints 
	// as the pointer would automatically increase by 4 (bytes)
	for(count = 0; count<12; count++)
	{
		printf("\n%c from 0x%x", *arrPtr, arrPtr);
		arrPtr++;
	}
	
	printf("\n\n\n\n\n");
	
	for(count = 0; count<3; count++)
	{
		printf("\n%d from 0x%x", *arr_ptr, arr_ptr);
		arr_ptr++;		// Here the pointer is jumping by 4 bytes :)
	}
	
	
	
	return 0;
}