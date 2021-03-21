#include<stdio.h>
void main()
{
    int i=1,t,num,rn,count;//rn = run numbers of the program, count=counter for the loop.
    printf("Enter how meny times you want run the loop: ");
    scanf("%d",&rn);
    printf("%d   ",i);
    for(count=0,num=0;count<rn;count++)
    {
        t=i;
        i=i+num;
        num=t;
        printf("%d   ",i);
    }
}