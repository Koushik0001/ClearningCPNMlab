/* 8. Write a C program to find out sum of the following series.
                S = 1@ + 2@ + 3@ + 4@ + … + n@   
where,n@ is the sum of all factors of n. Example: 6@ = 1+2+3+6 = 12 [OPTIONAL]*/


#include<stdio.h>
#include<stdlib.h>
int sum_of_factors(int num)
{
    int sum = 0, t=1;
    while (t<=num)
    {
        if(num%t ==0)
            sum += t;
        t++;
    }
    return (sum);
}
int main()
{
    int n,S=0;
    printf("\n\nEnter the value of n : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        S += sum_of_factors(i);
        printf("The sum of the series is : %d\n\n",S);
    return 0;
}