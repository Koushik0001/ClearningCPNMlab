/* 5. Write a C program to find out sum of the following series. S= 1.2 + 2.3 + 3.4 + 4.5 + ... +n.(n+1)*/
#include<stdio.h>

int main()
{
    int n;
    float j = 1.2, sum = 0;
    printf("\n\nEnter the values of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum += j;
        j += 1.1;
    }
    printf("The sum of the series is %f\n\n",sum);
    return 0;
}