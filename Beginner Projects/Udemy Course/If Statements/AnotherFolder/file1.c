#include <stdio.h>

#define MAXLEN		50

void sayHello(char *name)
{
	printf("Hello %s! Welcome to the world of C",name);
}

int main()
{
	char name [MAXLEN];
	printf("Hello Sir, please enter your name: \n");
	scanf(" %s",&name);

	sayHello(name);
	
	return 0;
}