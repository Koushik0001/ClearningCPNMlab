/* 4. Amicable numbers are a pair of numbers with the following property: the sum of all of the proper 
divisors of the first number (not including itself) exactly equals the second number while the sum of 
all of the proper divisors of the second number (not including itself) likewise equals the first 
number. Write a function which takes as argument two numbers and returns 1 if they are amicable 
numbers else 0.*/

#include<stdio.h>

int amicable(int, int);
int main()
{
    int num1, num2, d;
    printf("\n\nEnter num1 : ");
    scanf("%d",&num1);

    printf("Enter num2 : ");
    scanf("%d",&num2);

    d = amicable(num1, num2);

    if(d == 1)
        printf("The numbers are amicable.\n\n");
    else
        printf("The numbers are not amicable.\n\n");
    return 0;
}

int amicable(int num1, int num2)
{
    int t=2, sum1=0, sum2=0;
    while(t <= num1/2)
    {
        if(num1 % t ==0 )
            sum1 += t;
        t++;
    }
    t=2;
    while(t <= num2/2)
    {
        if(num2 % t ==0 )
            sum2 += t;
        t++;
    }
    if((sum1+1==num2) && (num1==sum2+1))
        return(1);
    else
        return(0);
}