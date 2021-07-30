/* 9. Write a C program which prints all prime numbers between 1 and 100.*/

#include<stdio.h>

int check_prime(int);
int main()
{
    int determinant, num;
    printf("\n\nPrime numbers between 1 and 100 are : ");
    for(num = 1; num<=100; num++)
    {
        determinant = check_prime(num);
        if(determinant == 1)
            printf("%d\n",num);
    }
    printf("\n\n");
    return 0;
}

int check_prime(int num)
{
    int t = 2;
    while (t<=num/2)
    {
        if(num%t == 0)
            return(0);
        else
            t++;
    }
    return(1);
}