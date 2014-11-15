//
//  main.c
//  Homework4(2)
//
//  Created by admin on 11/15/14.
//  Copyright (c) 2014 admin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Task1 (int A);
void Task2 ();
void Task3();
void Task4();
void Task5();
void Task7();

int main(int argc, const char * argv[]) {
    
    Task1 (45);
    Task2();
    Task3();
    Task4();
    Task5();
    Task7();
    return 0;
}

void Task1 (int A)
{
    int array [16];
    for (int i=0; i<16; i++)
    {
        array[i]= random()%100+1;
        printf("%d\t", array[i]);
    }
    for (int j=0; j<16; j++)
    {
        if (array[j]>A)
        {
            printf("\nЧисло %d больше %d\n\n", array[j], A);
            break;
        }
        
    }
}

void Task2 ()
{
    int array1 [16]={1,2,2,3,4,5,5,5,6,6,7,8,9,10,10,11};
    int array2 [16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int j=0;
    for (int i=0; i<16; i++)
    {
        if (array1[i]!=array1[i+1])
        {
            array2[j]=array1[i];
            printf("%d\t", array2[j]);
        }
    }
}

void Task3()
{
    int array [16]={10,26,-36,-38,-15, 5,-5, 80, -40, 10, 11, 200, 13, 48, -18};
    int sum=0;
    for (int i=0; i<16; i++)
    {
        if (abs(array[i])<=5)
            sum=sum+pow(abs(array[i]),2);
    }
    printf("\n\nСумма квадратов чисел<=5 по модулю равна: %d\n", sum);
}

void Task4()
{
    int array [16]={10,0,-36,-38,-15, 5,-5, 80, -40, 10, 11, 0, 13, 0, -18, -9};
    int count_zero = 0;
    int count_pos = 0;
    int count_neg = 0;
    for (int i=0; i<16; i++)
    {
        if (array[i]==0)
            count_zero+=1;
        else if (array[i]>0)
            count_pos+=1;
        else count_neg+=1;
    }
    printf("\n\nКоличество положительных чисел в массиве: %d\n", count_pos);
    printf("\nКоличество отрицательных чисел в массиве: %d\n", count_neg);
    printf("\nКоличество нулей в массиве: %d\n", count_zero);
    
}

void Task5()
{
    int array [16]={10,0,-36,-38,-15, 5,-5, 80, -40, 10, 11, 0, 13, 0, -18, 9};
    int count_sign = 0;
    for (int i=0; i<15; i++)
    {
        if (((array[i]>=0)&&(array[i+1]<0))||((array[i]<0)&&(array[i+1]>=0)))
            count_sign+=1;
        
    }
    printf("\nКоличество смен знака в массиве: %d\n", count_sign);

}

void Task7()
{
    int array [15] = {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0};
    printf("\nРяд фибоначи:%d\t%d\t", array[0], array[1]);
    for(int i=2; i<15; i++)
    {
        array[i]=array[i-1]+array[i-2];
        printf ("%d,\t",array[i]);
    }
}