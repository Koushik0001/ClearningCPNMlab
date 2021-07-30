/* 1. Write a C program which prints all integers divisible by n between 1 and 100 where value of n is 
provided by the user.*/

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int x = 1;
    while (n*x < 100)
    {
        printf("%d\n",n*x);
        x++;
    }
    
    return 0;
}