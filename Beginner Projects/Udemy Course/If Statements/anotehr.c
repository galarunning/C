#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTINGLEN 	100

char *sayHello(char *name){
	
	char *s;
	s = (char*)malloc(MAXSTINGLEN);
	
	// *s = 0
	s[0] = 0;						//Equivalent of saying s[0] = '/0' to initialise the array
	
	strcat(s,"Hello ");
	strcat(s,name);
	strcat(s,"\nNice to meet you!\n");
	printf("%sFrom inside the function\n+++++++++++++++++++++++++++++",s);	//sprintf 			
	return s;
	
}

int main()
{
	char name[MAXSTINGLEN];
	char *greeting;
	
	char not_working[] = "Press any key to exit the program ...";
	
	//Getting user input
	printf("Hello Sir, please print your name: ");
	scanf("%s", name);
	
	greeting = sayHello(name);
	printf(greeting);					// This does not print if the name variable is declared as a char * type. WHY???
	printf("From outside the function\n");
	
	printf("\n\n\nAddress of Greetings in memory: 0x%x\n\n", greeting);	
	
	printf(not_working);
	scanf(" %c",&name);
	
	return 0;	
}