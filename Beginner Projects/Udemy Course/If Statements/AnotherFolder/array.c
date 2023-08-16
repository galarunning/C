#include <stdio.h>

#define MAXLEN 			101

int main()
{
	
	char user[MAXLEN];
	
	printf("Enter your string: ");
	//scanf("%s",&user);
	
	fgets(user, sizeof(user),stdin);	// This accounts for the white spaces! :)
	
	for(int i=0; i <= MAXLEN; i++)
	{
		printf("The character at address %d is: %c\n",i,user[i]);
	}
		
	return 0;
}