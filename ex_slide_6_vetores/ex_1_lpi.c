#include<stdio.h>

void preenche(int *xs, int n);
float media(int *xs,int n);

int main(void)
{
	int n;
	printf("enter the size of the vector: ");
	scanf("%d", &n);

	while(n > 100)
	{
		printf("size out of range, enter a number less than 100: ");
		scanf("%d", &n);
	}
	
	int vec[n];
	
	preenche(vec, n);
	printf("the average is: %f\n", media(vec, n));
	
	return 0;
}

void preenche(int *xs, int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("enter a number for the array: ");
		scanf("%d", (xs+i));
	}
}

float media(int *xs,int n)
{
	float sum = 0;
	int counter = 0;
	
	for(int i = 0; i < n; i++)
	{
		sum += *(xs+i);
		counter += 1;
	}			
	return (sum/counter);
}
