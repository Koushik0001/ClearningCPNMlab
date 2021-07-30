// 4. Write a C program to find out sum of the following series : S=1+2+3+4+ ... +n

#include<stdio.h>

int main()
{
    int sum=0, n;
    
    printf("\n\nEnter the values of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum += i;
    printf("The sum of the series is %d\n\n",sum);
    return 0;
}