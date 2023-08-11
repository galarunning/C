

#include <stdio.h>

int main(int argc, char **argv)
{
	
	int PwrBanksNu;
	
	printf("Enter the number of Power banks you own: ");
	scanf("%d",&PwrBanksNu);
	
	printf("\nYou entered : %d\n\n",PwrBanksNu);
	
	// Check for the input!
	if (PwrBanksNu<0)
	{
		printf("HOW CAN YOU HAVE LESS THAN 0???\n\n");
		printf("********PROGRAM WILL TERMINATE**************")
	}
	else
	{
		if (PwrBanksNu>10)
		{
			printf("\nYou cannot get more powerbanks!");
		}
		else if (PwrBanksNu>7)
		{
			printf("\nYou have more than 7 you should not get one");
		}
		else if (PwrBanksNu>4)
		{
			printf("\nYou can go ahead and buy one more");
		}
		else if (PwrBanksNu>1)
		{
			printf("\nDefinetely! Buy an additional one also");
		}
		else if (PwrBanksNu<1)
		{
			printf("\nBUY BUY BUY");
		}
	}
	return 0;
}