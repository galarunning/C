#include <stdio.h>

int main()
{
	void* p;
	int i = 5;
	
	p = &i;
	void* q = p;
	
	printf("%d, %d, %d", i, *p, *q);
	
	return 0;
}