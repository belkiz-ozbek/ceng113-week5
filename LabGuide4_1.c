#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int capacity,basePrice;
	
	printf("\nPlease enter engine capacity(in cc): ");
	scanf("%d",&capacity);

	
	printf("\nPlease enter the basePrice: ");
	scanf("%d",&basePrice);

	
	
	if (capacity<=1600)
	{
		if (basePrice>0 && basePrice<92000) {
			printf("selling price is: %f TL", basePrice*1.45*1.18);
		}
		else if (basePrice>92000 && basePrice<150000){
			printf("selling price is: %f TL", basePrice*1.5*1.18);
		}
		else if(basePrice>150000){
			printf("selling price is: %f TL", basePrice*1.8*1.18);
		}
	}
	if(capacity>1601){
		if(basePrice>0 && basePrice<17000){
				printf("selling price is: %f TL", basePrice*2.30*1.18);
		}
		else if(basePrice>170000){
				printf("selling price is: %f TL", basePrice*2.5*1.18);
		}
	}
	
	

	
	
	return 0;
}
