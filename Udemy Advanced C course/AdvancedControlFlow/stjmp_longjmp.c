#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

/************************************************************************
THESE Functions are used for error handling in functions and for loops.
*************************************************************************

setjmp == try block| More like a come from statement than go to
longjmp == throw block | Similar to go to but can jump in a different func or func in a diff file

Author          : Matteo Gala
Purpose         : Learning
Program desc.   : Learning how to use stjmp and longjmp for error handling.


************************************************************************/

jmp_buf buf;    // Variable of type jmp_buf needs to be used

void main()
{   
    int i  = setjmp(buf);

    printf("i = %d\n", i);

    longjmp(buf, 42);
    printf("Does this line get printed?");



}