#include <stdio.h>

void main()
{

    goto firstjump;
    goto secondjump;
    goto thirdjump;
    goto fourthjump;
    goto fifth;

    firstjump:
        printf("        *          \n");
    
    secondjump:
        printf("       * *          \n");

    thirdjump:
        printf("      *   *         \n");
    
    fourthjump:
        printf("     *     *         \n");
    
    fifth:
        printf("    *********        \n");
}