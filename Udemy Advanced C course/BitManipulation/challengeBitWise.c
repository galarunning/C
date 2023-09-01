#include <stdio.h>
#include <stdlib.h>

#define SHIFT_LEFT      1
#define SHIFT_RIGHT

long long convertBinaryToDecimal(int num);

int main()
{
    int a;
    int b;
    long long resulta;
    long long resultb;

    int numLeftShiftResult;

    long long binaryAComplementResult;
    long long binaryBComplementResult;
    long long bnaryABANDresult;
    long long bnaryABORresult;
    long long bnaryABXORresult;
    long long bnaryABLeftShifResult;
    long long bnaryALeftShifResult;
    long long bnaryBLeftShifResult;
    

    resulta = convertBinaryToDecimal(a);
    resultb = convertBinaryToDecimal(b);

    printf("Enter the first value: ");
    fflush(stdin);
    scanf("%d", &a);

    printf("Enter the second value: ");
    fflush(stdin);
    scanf("%d", &b);

    printf("\n\n%lld\n\n%lld\n\n", resulta, resultb);

    binaryAComplementResult = convertBinaryToDecimal(~a);
    binaryBComplementResult = convertBinaryToDecimal(~b);
    bnaryABANDresult = convertBinaryToDecimal(a&b);
    bnaryABORresult = convertBinaryToDecimal(a|b);
    bnaryABXORresult = convertBinaryToDecimal(a^b);
    bnaryALeftShifResult = convertBinaryToDecimal(a <<2);
    bnaryBLeftShifResult = convertBinaryToDecimal(b <<2);


    printf("The result of applying the ~ operator on number %d (%lld) is: %lld \n", a, resulta, binaryAComplementResult);
    printf("The result of applying the ~ operator on number %d (%lld) is: %lld \n", b, resultb, binaryBComplementResult);
    printf("The result of applying the & operator on number %d (%lld) and number %d (%lld) is: %lld \n", a, resulta, b, resultb, bnaryABANDresult);
    printf("The result of applying the | operator on number %d (%lld) and number %d (%lld) is: %lld \n", a, resulta, b, resultb, bnaryABORresult);
    printf("The result of applying the ^ operator on number %d (%lld) and number %d (%lld) is: %lld \n", a, resulta, b, resultb, bnaryABXORresult);
    printf("The result of applying the left shift operator << on number %d (%lld) by 2 places is number %d (%lld)\n", a, resulta, bnaryALeftShifResult, bnaryBLeftShifResult);

    return 0;
}

long long convertBinaryToDecimal(int num)
{
    long long result = 0;
    int remainder, i = 1;

    while(num != 0)
    {
        remainder  = num % 2;
        num = num/2;
        result += remainder*i;
        i = i*10;
    }
    return result;
}

