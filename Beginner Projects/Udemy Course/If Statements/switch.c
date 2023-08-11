#include <stdio.h>

int main()
{
	short x;
	
    printf("Enter a number: ");
	scanf("%d ",&x);
	
	switch(x)
	{
		case 0:
			printf("0 Was selected");
			break;
		case 1:
			printf("1 Was selected");
			break;
		case 2:
			printf("2 Was selected");
			break;
		case 3:
			printf("3 Was selected");
			break;
		default:
			printf("INCORRECT");
	}
	
	return 0;
}