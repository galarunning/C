
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 1;
	int b = 2;
	
	//a AND b
	printf("\na&b = %d\n",a&b);
	
	//a or b
	printf("\na|b = %d\n",a|b);
	
	//a
	printf("a^b = %d\n", a ^ b);
 
    printf("~a = %d\n", a = ~a);
 
    printf("b<<1 = %d\n", b << 1);
 
    printf("b>>1 = %d\n", b >> 1);

	
    return 0;
	
	
	
}