/*****************************************************/
/*****************************************************
 * PROGRAM DESCRIPTION
 * Program that sets bits at the chosen location by the user.
 * 
 * Program first stores the decimal value entered by the user and then asks for the bit to set/ toggle
 * and then reads it back. 
 * 
 * Author       : Matteo Gala
 *    
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int chosenNum;
    int newNum;
    int bitShift;

    printf("Please enter a decimal number: ");
    fflush(stdin);
    scanf("%d", &chosenNum);

    printf("Please enter the bit number you want to toggle: ");
    fflush(stdin);
    scanf("%d", &bitShift);

    newNum = chosenNum ^ (1 << bitShift);   // If you want to just set that one ON then use | operator instead.
    printf("\n\033[1;31mNumber you entered: %d\033[0m\n\nNumber with the %d bit toggled: %d", chosenNum, bitShift, newNum);

    return 0;
}
