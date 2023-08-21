#include <stdio.h>
/*
auto keyword is used for function body and local varables
All variables aredeclared by auto by default. auto is implicitly there
In C++ auto is used for something completely different.
Not used much for portability.
*/

/*
Extern Keyword is used to use a variable between multiple functions and blocks and files!
To be used in a file you need to define the variable/function as extern so the compilers
knows it needs to go and look for it in other files.
*/

/*
STATIC (on local variables) => Used in local variables to retain the value of a variable!
It basically does not get re-initialised! :) THEY ARE AUTOMATICALLY allocated on the HEAP not on the STACK

STATIC Global --> when you want to use that variable/function everywhere from the same file
Also helps for stop re-intialise each and every time.

STATIC cannot be used with Extern!
STATIC variables should never be declared inside a structures! You could have a whole structures as static! :)
*/

/*
REGISTERcan hold an instructions an address or any data.
This is going to use the variables that are stored in the registers (a memory place in the processor directly.)
YOU CANNOT obtain the address of a register variables using pointers. --> Cannot have the & operator applied to it.
But is super fast memory 

You could declare pointers as registers, to store actual addresses that can be accessed very quickly.
*/


int main()
{
    int x = 155;

    register int* intPtr = &x;      //This pointer lives on the CPU register :O

    printf("\n%d", *intPtr);

    return 0;
}