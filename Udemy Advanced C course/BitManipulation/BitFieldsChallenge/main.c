#include <stdio.h>
#include <stdbool.h>

/*Define the line styles*/
#define     SOLID   1
#define     DOTTED  2
#define     DASHED  3

/*Define the colours*/
#define RED     1
#define GREEN   2   
#define BLUE    4

/*Define the mixed colours*/
#define BLACK   0
#define YELLOW  (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN    (GREEN | BLUE)
#define WHITE   (RED | GREEN | BLUE)

const char *colours[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

struct box
{
    bool opaque             : 1;
    unsigned int colourF    : 3;
    unsigned int            : 4;
    bool show_border        : 1;
    unsigned int borderC    : 3;
    unsigned int borderS    : 2;
    unsigned int            : 2;
};

void show_settings(const struct box *pb);

void main()
{
    /* Create and inisitalise a box structure */
    struct box box1 = {true, YELLOW, true, GREEN, DASHED};

    printf("Original box settings: \n\n");
    show_settings(&box1);

    // Setting all fields to different values and printing them out again.
    box1.opaque = false;
    box1.show_border = false;
    box1.borderC = WHITE;
    box1.borderS = DOTTED;
    box1.colourF = WHITE;

    printf("Modified box settings: \n\n");
    show_settings(&box1);
}

void show_settings(const struct box *pb)
{
    printf("+++++++++++++++++++++++++++++++++++++\n");
    printf("The box is %s\n", pb->opaque == true ? "opaque" : "trasparent");
    printf("The fill colour is %s\n", colours[pb->colourF]);
    printf("Border %s\n", pb->show_border == true ? "shown" : "not shown");
    printf("Border of the box are: %s\n", colours[pb->borderC]);
    printf("Border styles: ");
    switch(pb->borderS)
    {
        case DASHED:
            printf("dashed\n\n\n");
            break;
        case DOTTED:
            printf("dotted\n\n\n");
            break;
        case SOLID:
            printf("solid\n\n\n");
            break;
        default:
            printf("Unknown\n\n\n");
    }
}