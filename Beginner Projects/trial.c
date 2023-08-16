#include <stdio.h>
#include <string.h>

char* gettingString(char* title);
char title[200] = "Some Weird title";
int main()
{
    printf("Before: %s\n\n",title);

    strcpy(title,gettingString(title));
    printf("\nAfter: %s\n\n",title);

    return 0;
}

char* gettingString(char* title)
{
    printf("\nEnter a title: ");
    fflush(stdin);
    fgets(title, 200, stdin);
    
    return title;
}