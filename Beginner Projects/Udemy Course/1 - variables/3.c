#include <stdio.h>

int main(){
	
	/*
	- char is always 8bit
	- char is always signed as default and can also declared as a unsigned
	
	-int is 32 bits depending of the architecture of the CPU
	-unsigned int also 32 bit as above
	
	short --> 16-bits (sometimes as per int above)
	
	long --> 32 bits (sometimes) although could be 64 bits in some systems
	
	float --> 32bits (sometimes)
	double --> 64bits (sometimes!)
	
	*/
	
	printf("char takes %d byte(s) \n",sizeof(char));
	printf("unsigned char takes %d byte(s) \n",sizeof(unsigned char));
	printf("Signed char takes %d byte(s) \n",sizeof(signed char));
	
	printf("************************************************\n");
	
	printf("int takes %d byte(s) \n",sizeof(int));
	printf("signed int takes %d byte(s) \n",sizeof(signed int));
	printf("Unsigned int takes %d byte(s) \n",sizeof(unsigned int));
	
	printf("************************************************\n");
	
	printf("Short takes %d byte(s) \n",sizeof(short));
	printf("Signed short takes %d byte(s) \n",sizeof(signed short));
	printf("Unsigned short takes %d byte(s) \n",sizeof(unsigned short));
	
	printf("************************************************\n");
	
	printf("Long takes %d byte(s) \n",sizeof(long));
	printf("Signed long takes %d byte(s) \n",sizeof(signed long));
	printf("Unsigned long takes %d byte(s) \n",sizeof(unsigned long));
	
	printf("************************************************\n");
	
	printf("Float takes %d byte(s) \n",sizeof(float));
	
	printf("************************************************\n");
	
	printf("double takes %d byte(s) \n",sizeof(double));

	scanf("");
	
	return 0;
	
}