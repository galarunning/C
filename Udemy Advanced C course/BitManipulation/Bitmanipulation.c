#include <stdio.h>

int main(int argc, char **argv)
{
    short int w1 = 147;
    short int w2 = 64;
    short int w3 = 0;
    short signed int result;

    w3 = w1 ^ w2;       // XOR --> Bitwise exclusive or (if both 1 then is 0)

    /*
    0001010101010
    1101101011101
    -------------
    1100111110111
    */
    // The XOR Operator is very useful to swap values without the need of a third variable.

    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;
    result = ~w2;
    


    printf("%d", w3);
    printf("\n\nRESULT = %d", result);
}