#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("WELCOME TO CENG113 MARKET");
	printf("\nList of product		Price");
	printf("\nProduct 1			2.98");
	printf("\nProduct 2			4.50");
	printf("\nProduct 3			9.98");
	printf("\nProduct 4			4.49");
	printf("\nProduct 5			6.87");
	printf("\n**************************");
	printf("\nType of cards		Discount");
	printf("\nStudent			% 20");
	printf("\nLecturer			%10");
	printf("\nGuest				%5");
	printf("\n**************************");
	printf("\n		START BUYING");
	printf("\n**************************");
	
	int product,amount;
	char membership,membershipType;
	double price,totalPrice; 
	
	printf("\nEnter the product to buy: (1-2-3-4-5): ");
	scanf("%d",&product);
	
	switch (product)
	{
		case 1: 
			price=2.98;
			break;
		
		case 2: 
			price=4.50;
			break;
		
		case 3:
			price=9.98;
			break; 
		
		case 4:
			price=4.49;
			break;
		
		case 5: 
			price=6.87;
			break;
	}
	
	printf("\nEnter the amount: ");
	scanf("%d",&amount);
	
	printf("Do you have membership Card(Y/N): ");
	scanf(" %c",&membership);
	
		
	switch(membership)
	{
		case 'Y':{
			printf("What is your membership type(S-L-G): ");
			scanf(" %c",&membershipType);
			break;
		}
			
		case 'N':{
			totalPrice=amount*price;
			printf("Total price is: %f", totalPrice);
			break;
		}
			
	}
	
	switch(membershipType)
	{
		case 'S': {
			totalPrice=amount*price*0.8;
			printf("\nTotal price is: %f",totalPrice);
			break;
		}
		
		case 'L': {
				totalPrice=amount*price*0.9;
			printf("\nTotal price is: %f",totalPrice);
			break;
		}
		case 'G': {
			totalPrice=amount*price*0.95;
			printf("\nTotal price is: %f",totalPrice);
			break;
		}	
		
		
	}
	
	
	return 0;
}
