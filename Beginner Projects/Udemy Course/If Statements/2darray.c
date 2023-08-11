#include <stdio.h>

int main()
{
	
	// To initialise you use the double {}
	int arr[2][2] = {{12,24},
					 {15,30}};
	
	
	int i,j;
	

	// Best way to print arrays on the screen is to use nested for loops.
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	// arr[0][0] = 12;
	// arr[0][1] = 12;
	// arr[1][0] = 12;
	// arr[1][1] = 12;
	
	// printf("arr[0][0]: %d",arr[0][0]);
	// printf("arr[0][1]: %d",arr[0][1]);
	// printf("arr[1][0]: %d",arr[1][0]);
	// printf("arr[1][1]: %d",arr[1][1]);
	
	return 0;
}