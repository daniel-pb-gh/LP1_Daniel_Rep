#include<stdio.h>

int sum(short array[], int size);
float average(int sum, int counter);
int AboveAverage(short int array[], int size, float average);

int main(void)
{
    short int temps[50];
    short int counter = 0;
    float avg;
    int AboveAvgNum;

    for (int i = 0; i < 50; i++)
    {
        printf("enter a temperature: ");
        scanf("%hd", &temps[i]);
        counter += 1;
    }

    int size = (sizeof(temps)/ sizeof(temps[0])); 
    avg = average(sum(temps, size), counter);
    AboveAvgNum = AboveAverage(temps, size, avg);
    printf("the amount of numbers above average is : %i\n", AboveAvgNum);

}

int sum(short array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

float average(int sum, int counter)
{
    return (sum/counter);
}

int AboveAverage(short int array[], int size, float average)
{
    int AboveAvgNum = 0;
    for(int i = 0; i < size; i++)
    {
        if (array[i] > average)
        {
            AboveAvgNum += 1;
        }
    }
    return AboveAvgNum;
}