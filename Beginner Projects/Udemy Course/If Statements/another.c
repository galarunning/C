#include <stdio.h>


int main()
{
	
	//Building an array
	short array1[] = {1,2,3,4,5,6,7};
	
	int size = (sizeof(array1)/2);
	//printf(" %d",size);
	
	int i;
	for(i=0; i<size;i++)
	{
		printf("\n%d",array1[i]);		
	}
	
	for(i=size-2;i>0;--i)
	{
		printf("\n%d",array1[i]);
	}
	
	return 0;
	
}