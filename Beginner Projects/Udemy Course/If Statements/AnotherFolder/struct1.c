#include <stdio.h>

struct ChocBar
{
	unsigned int chocBarID;
	float price;
	unsigned int calories;
};

typedef struct ChocBar CB_t;

int main()
{
	CB_t CB0;
	CB_t CB1;
	CB_t CB2;
	CB_t CB3;
	
	CB_t* cb_ptr;
	
	
	CB0.chocBarID = 3395;
	CB0.price = 0.36;
	CB0.calories = 155;
	
	printf("CB0.ChocBarID = %d\n",CB0.chocBarID);
	printf("CB0.price = %f\n",CB0.price);
	printf("CB0.calories = %d\n",CB0.calories);
	
	cb_ptr = &CB1;
	
	cb_ptr->chocBarID = 1136;
	cb_ptr->price = 1.33;
	cb_ptr->calories = 659;
	
	printf("CB1.ChocBarID = %d\n",cb_ptr->chocBarID);
	printf("CB1.price = %f\n",cb_ptr->price);
	printf("CB1.calories = %d\n",cb_ptr->calories);
	
	// Now doing the same thing with the different notation
	
	cb_ptr = &CB2;
	
	(*cb_ptr).chocBarID = 156;
	(*cb_ptr).price = 1.10;
	(*cb_ptr).calories = 458;
	
	printf("CB2.ChocBarID = %d\n",(*cb_ptr).chocBarID);
	printf("CB2.price = %f\n",(*cb_ptr).price);
	printf("CB2.calories = %d\n",(*cb_ptr).calories);
	
		
	return 0;
}