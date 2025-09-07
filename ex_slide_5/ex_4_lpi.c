#include<stdio.h>

void troca(int *x, int *y);

int main(void)
{
	int x = 10;
	int y = 20;
	
	troca(&x, &y);
	printf("%d %d\n", x, y); 
	return 0;
}

void troca(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
