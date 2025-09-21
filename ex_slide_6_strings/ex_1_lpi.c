#include<stdio.h>

int tamanho(char *str);

int main(void)
{
	char str[20];
	printf("enter a string: ");
	scanf("%s", str);
	
	printf("the string has %d characters\n", tamanho(str));

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
