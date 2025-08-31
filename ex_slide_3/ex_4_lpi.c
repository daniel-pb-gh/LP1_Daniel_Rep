#include<stdio.h>

int main(void)
{
    float speed;
    printf("enter the car speed(mph): ");
    scanf("%f", &speed);
    speed = (speed * 1.6);
    if (speed <= 80)
    {
        printf("ACELERE\n");
    }
    else if (speed > 80 && speed < 100)
    {
        printf("MANTENHA\n");
    }
    else
    {
        printf("DESACLERE\n");
    }

}
