#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("entre com um número a: \n");
	scanf("%i", &a);

	printf("entre com um número b: \n");
	scanf("%i", &b);

	if (a > b)
	{
		printf("%i é maior que %i \n", a, b);
	}
	else if (a < b)
	{
		printf("%i é maior que %i \n", b, a);
	}
	else
	{
		printf("%i é igual a %i \n", a, b);
	}
}
