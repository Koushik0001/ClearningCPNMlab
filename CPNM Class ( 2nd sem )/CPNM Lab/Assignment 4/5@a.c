/* 5.a. C program to find out sum of the following series. 𝑆 = 1! + 2! + 3! + 4! + . . . +𝑛! */

#include<stdio.h>
int factorial(int);

int main()
{
    int n,sum;
    printf("enter the number of terms (n <=15): ");
    scanf("%d",&n);
    sum = 0;
    for(int i=0 ; i<n; i++)
        sum = sum + factorial(i+1);
    printf("%d",sum);
    return 0;
}

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
