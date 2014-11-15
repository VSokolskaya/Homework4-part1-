//
//  main.c
//  Homework4
//
//  Created by admin on 11/15/14.
//  Copyright (c) 2014 admin. All rights reserved.
//

#include <stdio.h>

void Task1 (int num);
void Task2 (int N);
int Task3 (int N);
void Task4 (int N, int M);
int Task5 ();
void Task6 (int N, int M);

int main(int argc, const char * argv[]) {
    
    Task1 (9);
    
    Task2 (25);
    
    printf ("\nСумма чисел равна: %d\n\n",Task3 (8));
    
    Task4 (1, 15);
    
    printf ("\nПроизведение двузначных нечетных чисел кратных 13 равно: %d\n\n",Task5());
    
    Task6 (1, 15);
    
    return 0;
}

void Task1 (int num)
{
    int i=1;
    int j=1;
    
    while (i<=num)
    {
        for(j=1; j<=i; j++)
        {
            printf ("%d",i);
        }
        printf ("\n");
        i++;
    }
    printf ("\n");
}

void Task2 (int N)
{
    int i=1;
    for(i=1; i<=N; i=i+2)
    {
        printf ("%d\t",i);
    }
    printf ("\n");
}

int Task3 (int N)
{
    int sum=0;
    int i=1;
    while (i<=N)
    {
        sum=sum+i;
        i++;
    }
    return sum;
}

void Task4 (int N, int M)
{
    int i=0;
    printf ("Числа из диапазона %d - %d которые делятся на 3, но не делятся на 5:\n", N, M);
    for (i=N; i<=M; i++)
    {
        if ((i%5)&&(!(i%3)))
            printf ("%d\t",i);
    }
    printf ("\n\n");
}

void Task6 (int N, int M)
{
    
    int i=0;
    printf ("Числа из диапазона %d - %d которые делятся на 5 или на 7:\n", N, M);
    for (i=N; i<=M; i++)
    {
        if ((!(i%5))||(!(i%7)))
            printf ("%d\t",i);
    }
    printf ("\n\n");
}

int Task5()
{
    int i=11;
    int result=1;
    do
    {
        if((i%2)&&(!(i%13)))
            result = i*result;
        
        i++;

        
    }while(i<100);
    

    return result;
}