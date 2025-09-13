#include<stdio.h>

void PrintVector(int vet[]);
void MyRemove(int vector[],int size, int Index);

int main(void)
{
	int vet[5];
	int I;
	int size;
	
	for(int i = 0; i < 5; i++)
	{
		printf("enter a number for the vector: ");
		scanf("%d", &vet[i]);
	}
	
	size = sizeof(vet)/sizeof(vet[0]);
	
	PrintVector(vet);
	
	printf("enter a number I: ");
	scanf("%d", &I);
	while(I > 5 || I < 0)
	{
		printf("invalid number, enter a number less then or equal to 5: ");
		scanf("%d", &I);
	}
	
	MyRemove(vet, size, I);
	PrintVector(vet);
	
	return 0;
}

void MyRemove(int vector[],int size, int Index)
{
	int aux;
	
	vector[Index] = 0;
	
	for(int i = Index; i <= size; i++)
	{
		aux = vector[(i + 1)];
		vector[i] = vector[(i+1)];
		vector[i] = aux;
	}
}			

void PrintVector(int vet[])	
{
	for(int i = 0; i < 5; i++)
		{
			printf("%d\n", vet[i]);
		}			
}		
			
