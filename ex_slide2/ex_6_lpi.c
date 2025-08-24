#include<stdio.h>

int main(void)
{
    int sum = 0;
    int n;

    printf("enter a number: ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        sum += (i * i);
    }

    printf("the sum is %i\n", sum);

    return 0;

}
