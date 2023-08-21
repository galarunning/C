#include <stdio.h>

// This can also be applied to structures and unions!!!!
struct point
{
    int x,y;
};


int main()
{   
    int myArray[100] = {[50]46,[55 ... 69]22};

    for(int i = 0; i<100;i++)
    {
        printf("%d\n",myArray[i]);
    }
    
    //Can assign values to structures like so:
    struct point p = {.y = 3, .x = 65};
    struct point p1 = {y:3, x:65};
    struct point p2 = {2,3}; // This way is going to be in order!

    printf("\n\n\n\nNow  an Array of 5 structures:\n\n");

    //Initialising an array of structures --> SO MUCH EASIER THIS WAY :) 
    struct point pts[5] = {[2].y = 5, [2].x = 666, [0].x = 21};
    for(int i = 0; i<5; i++)
    {
        printf("%d\t%d\n",pts[i].x, pts[i].y);
    }

    return 0;
}