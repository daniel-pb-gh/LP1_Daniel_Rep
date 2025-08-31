#include<stdio.h>
#include<math.h>

int eh_primo(int a);
void todos_os_primos(int max);

int main(void)
{
    int max;
    printf("enter the max number: ");
    scanf("%d", &max);
    todos_os_primos(max);
    return 0;
}


int eh_primo(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void todos_os_primos(int max)
{
    for (int i = 2; i < max; i++)
    {
        if (eh_primo(i) == 1)
        {
            printf("%d\n", i);
        }
    }
}
