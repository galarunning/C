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
    FILE* filePtr;
    Pen p0,p1;

    p0.penLengthmm = 50;
    strcpy(p0.penColor,"White");
    strcpy(p0.penModelName, "Bic");

    p1.penLengthmm = 50;
    strcpy(p1.penColor,"Yellow");
    strcpy(p1.penModelName, "Sun");

    printf("Structure p0: \n");
    printf("P0.penlengthmm = %d\n",p0.penLengthmm);
    printf("p0.penColor = %s\n", p0.penColor);
    printf("p0.penModelName = %s\n", p0.penModelName);

    printf("\n\nStructure p1: \n");
    printf("P1.penlengthmm = %d\n",p1.penLengthmm);
    printf("p1.penColor = %s\n", p1.penColor);
    printf("p1.penModelName = %s\n", p1.penModelName);
    
    // Write into a binary file
    filePtr = fopen("WritePenData.bin","wb");
    fwrite(&p0, sizeof(Pen),1,filePtr);
    fwrite(&p1, sizeof(Pen),1,filePtr);
    
    fclose(filePtr);


    return 0;
}