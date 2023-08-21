

#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>

int main()
{
    #ifdef __STD_NO_COMPLEX__
        printf("Complex numbers and arithmetics is NOY supported.\n");
    #else
        printf("Complex arithmetic is Supported.\n");
    #endif
    
    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 -4.0*I;

    printf("Real part of cx: %.2f Imaginary Part of cx: %.2fi\n\n", creal(cx), cimag(cx));
    printf("Real part of cy: %.2f Imaginary Part of cy: %.2fi\n\n", creal(cy), cimag(cy));

    double complex sum = cx+cy;
    printf("\nThe sum cx + cy = %.2f %+.2fi",creal(sum), cimag(sum));

    double complex multiplication = cx * cy;
    printf("\nThe multiplication cx * cy = %.2f %+.2fi",creal(multiplication), cimag(multiplication));

    double complex pwr = cpow(cx, cy);
    printf("\nThe power cx ^ cy = %.2f %+.2fi",creal(pwr), cimag(pwr));
    

    return 0;
}