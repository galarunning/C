#include <stdio.h>

int main()
{   
    /*Volatile is a keyword for real-time systems 
    // You are saying the compiler to not cache any values 
    of that variable as it could change quickly and 
    unexpectedly. The optimiser is more careful to reload the variable every time
    it is used instead of holding a copy in a register (microprocessor chace).
    
    ONLY 3 types of variables should use volatile:
        1. Memory mapped peripheral registers
        2. global variables (non-stack) modified by an interrupt service routine
        3. global variables accessed by multiple tasks within a multi-threaded application
          
     */ 

    // YOU CAN use const with volatile (example usage is hardware clock.)

    return 0;
}