#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char mystring[] = "Hello ";
	
	printf("These are %d arguments passed in\n",argc);
	
	strcat(mystring,argv[0]);
	
	printf(mystring);
	
	printf("\n\n********************* FOR LOOP *********************\n\n\n");
	
	char final_string[300];
	
	for(int i=0;i<=argc;i++)
	{
		strcat(final_string, argv[i]);
		strcat(final_string, " ");
		printf("\n%s",final_string);
	}
	
	return 0;
}
