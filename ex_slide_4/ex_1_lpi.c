#include<stdio.h>
#include<math.h>

int eh_primo(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
	int a;
    printf("enter a number: ");
	scanf("%i", &a);
	if (eh_primo(a) == 0)
	{
		printf("the number is prime \n");
	}
	else
	{
		printf("the number isn´t prime \n");
	}

	return 0;
}
