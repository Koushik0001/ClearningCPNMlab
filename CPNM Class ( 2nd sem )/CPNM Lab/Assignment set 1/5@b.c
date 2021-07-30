/* 5.b. C program to find out sum of the following series. 𝑆 = 1.2*1! + 2.3*2! + 3.4*3! + 4.5*4! +
. . . +n. (n + 1)*n!.*/

#include<stdio.h>
int factorial(int);

int main()
{
    int n;
    float sum=0,j =1.2;    printf("enter the number of terms (n <=15): ");
    scanf("%d",&n);
    for(int i=0 ; i<n; i++)
    {
        sum = sum + j*factorial(i+1);
        j += 1.1;
    }
    printf("%.1f",sum);
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
