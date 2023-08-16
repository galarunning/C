#include <stdio.h>
#include <string.h>

struct pen_type
{
    int penLengthmm;
    char penColor[31];
    char penModelName[51];
};

typedef struct pen_type Pen;

int main()
{
    Pen p0,p1;
    FILE* filePtr;

    // Write into a binary file
    filePtr = fopen("WritePenData.bin","rb");

    if(filePtr == NULL)
    {
        printf("Error opening the bin file in current directory\n");
        return (-1);
    }

    fread(&p0, sizeof(Pen),1,filePtr);
    fread(&p1, sizeof(Pen),1,filePtr);

    printf("Structure p0: \n");
    printf("P0.penlengthmm = %d\n",p0.penLengthmm);
    printf("p0.penColor = %s\n", p0.penColor);
    printf("p0.penModelName = %s\n", p0.penModelName);

    printf("\n\nStructure p1: \n");
    printf("P1.penlengthmm = %d\n",p1.penLengthmm);
    printf("p1.penColor = %s\n", p1.penColor);
    printf("p1.penModelName = %s\n", p1.penModelName);
    
    fclose(filePtr);
    return 0;
}