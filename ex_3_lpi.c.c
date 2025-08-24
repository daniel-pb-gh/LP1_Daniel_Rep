#include<stdio.h>

int main(void)
{
	float price;
	printf("entre com o preço do celular em dólares\n");
	scanf("%f", &price);
	
	price = (price * 3.17);
	
	if(price < 1000) 
	{
		printf("BOM NEGÓCIO\n");
	}
	else
	{
		printf("NÃO É BOM NEGÓCIO\n");
	}
}
