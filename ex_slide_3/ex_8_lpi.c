#include<stdio.h>

int main(void)
{
    int n1;
    int n2;

    printf("enter n1: ");
    scanf("%i", &n1);

    printf("enter n2: ");
    scanf("%i", &n2);

    if (n1 < n2)
    {
        for (int i = (n1 + 1); i < n2; i++)
        {
            printf("%i\n", i);
        }
    }
    else
    {
        for (int i = (n2 + 1); i < n1; i++)
        {
            printf("%i\n", i);
        }
    }
}
