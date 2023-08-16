#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr;
    ptr = (char*)malloc(100);
    int i;

    if(ptr == NULL)
    {
        printf("Error!\nFailed by allocating memory!");
        return (-1);
    }

    strcpy(ptr,"This is some happily allocated memory");
    //printf("%s",ptr);

    for(i=0;i<100;i++)
    {
        if(ptr[i] != '\0')
        {
            printf("%c",ptr[i]);
        }
        else
        {
            break;
        }
    }

    free(ptr);      // ALWAYS free the memory   

    //printf("\n\n%s",ptr);

}