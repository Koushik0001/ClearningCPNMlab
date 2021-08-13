/* 17. Write a C program to print the first n numbers of the Fibonacci sequence. The Fibonacci sequence 
is constructed by adding the last two numbers of the sequence so far to get the next number in the 
sequence. The first and second numbers of the sequence are defined as 0 and 1. We get:
0, 1, 1, 2, 3, 5, 8, 13, 21…*/

#include<stdio.h>
int rec(int);
int main()
{   
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        printf("%d\n",rec(i));
    return 0;
}
int rec(int x)
{
    int y;
    if(x==1)
        return(x);
    else if (x==0)
        return (x);
    else
    {
        y = rec(x-1)+rec(x-2);
        return (y);
    }
}