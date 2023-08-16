#include <stdio.h>
#include "Header.h"
#include "Utils.c"

int main()
{
    FILE* filePtr;
    char line[200];

    filePtr = fopen("Weather Information.txt", "r");

    while(!feof(filePtr))
    {
        fgets(line,200,filePtr);
        printf("line[0] = %c\n\n", line[0]);

        if((int)line[0] == '.')         // I am not sure why I had to cast as an int line[0] in here as I am comaring it to '.'
        {
            printf("\n%s\n\n", "Found it!!!");
            //Call the function to create a file
            dotFound();
        }
   
    }

    fclose(filePtr);

    return 0;
}