#include<stdio.h>

void compra(int *conta, int valor);

int main(void)
{
	int conta1;
	int conta2;
	
	printf("saldo da conta 1: ");
	scanf("%d", &conta1);
	printf("saldo da conta 2: ");
	scanf("%d", &conta2);
	
	if (conta1 > conta2)
	{
		compra(&conta1, 500);
	}
	else
	{
		compra(&conta2, 500);
	}
	
	printf("conta 1: %d, conta 2: %d\n", conta1, conta2);
	
	return 0;
}

void compra (int *conta, int valor)
{
	*conta -= valor;
}
