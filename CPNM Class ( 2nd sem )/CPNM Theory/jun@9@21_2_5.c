#include<stdio.h>
//Write C code and Algorithm to compute summation of 1 to 50.
int main()
{
    int i, sum=0;
    for(i=1;i<=50;i++)
        sum=sum+i;
    printf("summation of all the numbers from 1 to 50 = %4d",sum);
    return 0;
}