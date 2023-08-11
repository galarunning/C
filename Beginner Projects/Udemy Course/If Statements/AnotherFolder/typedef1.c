#include <stdio.h>

int main()
{
	// This is a real world application to create a data type int_8 that stores 1 byte of data.
	typedef char int_8;
	
	int_8 u = 25;
	
	printf("The size of my new integer is: %d bytes", sizeof(int_8));
	
	return 0;
}