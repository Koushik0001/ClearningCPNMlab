/* 6. Write a C program to find out factorial of a given number. */

#include<stdio.h>

int factorial(int num)
{
    int facto=0;
    if(num !=1)
    {
        facto = num * factorial(num-1);
        return (facto);
    }
    else
        return(1);
}

int main()
{
    int num, facto;
    printf("Enter the number : ");
    scanf("%d",&num);
    facto = factorial(num);
    printf("%d! = %d",num,facto);
}