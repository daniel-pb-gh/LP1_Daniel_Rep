#include<stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;

    while (i > 0)
    {
        printf("enter a number (0 to stop) ");
        scanf("%i", &i);

       sum += i;
    }

    printf("the sum is: %i\n", sum);
    return 0;

}
