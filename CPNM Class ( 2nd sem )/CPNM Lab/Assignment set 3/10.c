/* 10. Write a program which accepts a number n and prints all prime factors of n. [OPTIONAL]*/
#include<stdio.h>

int main()
{
    int num,t,t2;
    printf("\n\nEnter the number : ");
    scanf("%d",&num);
    t = 2;
    t2=num;
    printf("The prime facters of the number are : \n\t1\n");
    while(t<=t2)
    {
        if(num%t==0)
        {
            printf("\t%d\n",t);
            while(num%t==0)
                num = num/t; 
        }
        else
            t++;
    }
    printf("\n\n");
    return 0;
}