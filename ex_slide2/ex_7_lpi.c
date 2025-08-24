#include<stdio.h>

typedef struct
{
     char name[30];
     int wins;
     int losses;
     int ties;
     int points;
}club;

char *best(club array[], int size);
char *worst(club array[], int size);

int main(void)
{
    club clubs[20];

    for (int i = 0; i < 20; i++)
    {
        printf("enter the club´s name: ");
        scanf("%29s", clubs[i].name);

        printf("enter the number of club´s wins: ");
        scanf("%i", &clubs[i].wins);

        printf("enter the number of club´s losses: ");
        scanf("%i", &clubs[i].losses);

        printf("enter the number of club´s ties: ");
        scanf("%i", &clubs[i].ties);
    }

    for (int i = 0; i < 20; i++)
    {
        clubs[i].points = ((clubs[i].wins * 3) + (clubs[i].ties * 1) + 0);
    }

    int size = (sizeof(clubs)/sizeof(clubs[0]));

    printf("the best club is is: %s\n", best(clubs, size));
    printf("the worst club is: %s\n", worst(clubs, size));



}

char *best(club array[], int size)
{
    int MaxNum = 0;
    int MaxIndex = 0;

    for(int i = 0; i < size; i++)
    {
        if (array[i].points > MaxNum)
        {
            MaxNum = array[i].points;
            MaxIndex = i;
        }
     }

     return array[MaxIndex].name;
}

char *worst(club array[], int size)
{
    int MinNum = 10000;
    int MinIndex = 0;

    for(int i = 0; i < size; i++)
    {
        if (array[i].points < MinNum)
         {
            MinNum = array[i].points;
            MinIndex = i;
         }
     }

    return array[MinIndex].name;
}
