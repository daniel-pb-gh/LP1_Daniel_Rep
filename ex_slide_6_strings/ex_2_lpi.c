#include<stdio.h>
#include<string.h>

int tamanho(char *str);
void concatena(char* d, char* o1, char* o2);

int main(void)
{
	char o1[20];
	char o2[20];
	char d[40];

	printf("enter string 1: ");		//I still have to fix large inputs
	scanf("%18s", o1);

	printf("enter string 2: ");
	scanf("%18s", o2);

	concatena(d, o1, o2);
	int t = tamanho(d);
	for(int i = 0; i < t; i++)
	{
		printf("%c", d[i]);
	}
	printf("\n");

	return 0;
}

int tamanho(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

void concatena(char* d, char* o1, char* o2)
{
	int sizeO1 = tamanho(o1);
	int sizeO2 = tamanho(o2);

	for(int i = 0; i < sizeO1; i++)
	{
		d[i] = o1[i];
	}
	for(int i = 0; i < sizeO2; i++)
	{
		d[sizeO1 + i] = o2[i];
	}
    d[sizeO1 + sizeO2] = '\0';
}
