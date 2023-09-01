#include <stdio.h>

// If you use const there is an object of compiler optimisation
// This is because the data once declared is read-only

// Global variable should be constant so that you cannot change them


int main()
{   
    const double pi = 3.141592654;

    // pi = pi/2;   ---> THIS would give a big fat error.

    const int days[12] = {31,28,31,30, ......};

    typedef const int zip; // You can put const as many times as you want
    const zip q = 8;

    // Const is a bit more complicate on pointers

    const float *pf;    //YOU CAN CHANGE THE ADDRESS but not the value is pointing to!!!

    float * const pt;   //pt is constant pointer SO HERE THE ADDRESS CANNOT CHANGE! VERY impoertnat where the astrict is!

    const float* const ptr;  // Both of the cases above both address and pointing valye cannot change

    float const *pfc;   // THIS IS THE SAME as const float *pfc is all about the astrict


    return 0;
}