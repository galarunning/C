#include <stdio.h>

int main()
{
	
	//Declaring the template of a struct
	struct product
	{
		unsigned int productID;
		float priceInUSD;
		unsigned int unitsInStock;
	};
	
	//Instantiate some of the products
	
	struct product P0;
	struct product P1;
	struct product P2;
	struct product P3;
	struct product P4;
	
	P0.productID = 1001;
	P0.priceInUSD = 30.00;
	P0.unitsInStock = 55;
	
	P1.productID = 1001;
	P1.priceInUSD = 30.00;
	P1.unitsInStock = 55;
	
	P2.productID = 1001;
	P2.priceInUSD = 30.00;
	P2.unitsInStock = 55;
	
	P3.productID = 1001;
	P3.priceInUSD = 30.00;
	P3.unitsInStock = 55;
	
	P4.productID = 1001;
	P4.priceInUSD = 30.00;
	P4.unitsInStock = 454;
	
	
	//P0
	printf("\n\nP0.productID: %d\n",P0.productID);
	printf("P0.priceInUSD: %.2f\n",P0.priceInUSD);
	printf("P0.unitsInStock: %d\n",P0.unitsInStock);
	
	//P1
	printf("\n\nP1.productID: %d\n",P1.productID);
	printf("P1.priceInUSD: %.2f\n",P1.priceInUSD);
	printf("P1.unitsInStock: %d\n",P1.unitsInStock);
	
	//P2
	printf("\n\nP2.productID: %d\n",P2.productID);
	printf("P2.priceInUSD: %.2f\n",P2.priceInUSD);
	printf("P2.unitsInStock: %d\n",P2.unitsInStock);
	
	//P3
	printf("\n\nP3.productID: %d\n",P3.productID);
	printf("P3.priceInUSD: %.2f\n",P3.priceInUSD);
	printf("P3.unitsInStock: %d\n",P3.unitsInStock);
	
	//P4
	printf("\n\nP4.productID: %d\n",P4.productID);
	printf("P4.priceInUSD: %.2f\n",P4.priceInUSD);
	printf("P4.unitsInStock: %d\n",P4.unitsInStock);
	
	
	
	return 0;
}