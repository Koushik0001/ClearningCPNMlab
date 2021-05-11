#include<stdio.h>
void rec(int,int);
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    rec(number,2);
}
void rec(int number,int i)
{
    if(number < 1)
        return;
    else if(number % i == 0)
    {
        printf("%d\n",i);
        rec(number/i,i);
    }
    else
    {
        rec(number,i+1);
    }
}