#include<stdio.h>
void main()
{
    int i, f=1, num;
    printf("           INPUT THE NUMBER");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        f=f*i;
    printf("    %d!=%d",num,f);
}