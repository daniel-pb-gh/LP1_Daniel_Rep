#include<stdio.h>

int main(void)
{
	int a;
	int b;
	
	printf("enter a number: ");
	scanf("%d", &a);
	
	printf("enter a number: ");
	scanf("%d", &b);
	
	int *p;
	
	if (a > b)
	{
		p = &a;
	}
	else
	{
		p = &b;
	}
	
	*p -= 50;
	
	printf("a: %d, b: %d\n", a, b);
    
    return 0;
}
