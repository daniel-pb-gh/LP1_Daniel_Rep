#include<stdio.h>

void compra (int* conta, int valor);

int main(void)
{
	int compras[] = { 100, 50, 80, 30, 20 };
	
	int conta1;
	int conta2;
	
	printf("saldo da conta 1: ");
	scanf("%d", &conta1);
	printf("saldo da conta 2: ");
	scanf("%d", &conta2);
	
	for (int i = 0; i < 5; i++)
	{
		if (conta1 > conta2)
		{
			compra(&conta1, compras[i]);
		}
		else
		{
			compra(&conta2, compras[i]);
		}
	}
	
	printf("conta 1: %d, conta 2: %d\n", conta1, conta2);

    return 0;
}

void compra (int* conta, int valor)
{
	*conta -= valor;
}
	
