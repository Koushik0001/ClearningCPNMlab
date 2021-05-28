#include<stdio.h>
int rec(int);
int main()
{   
    int i,y;
    printf("Enter the nummber upto which you want the sum to be calculated: ");
    scanf("%d",&i);
    printf("%d",rec(i));
    return 0;
}
int rec(int x)
{
    int sum;
    if(x==1)
        return(1);
    else
    {
        sum = rec(x-1) + x ;
        return(sum);
    }
}