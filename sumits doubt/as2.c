#include<stdio.h>
void main()
{
    const int n; int i,num;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1,num=0;i<=n;i++)
    {
        num=num+(i*i);
    }
    printf("answer is %d",num);
}
