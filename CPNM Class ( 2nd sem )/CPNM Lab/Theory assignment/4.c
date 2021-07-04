/*4. Write a C program to swap the value of two variables given by the user. */

#include<stdio.h>

int main()
{
    int t,a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    t = a;
    a = b;
    b = t;
    printf("a = %d\nb = %d",a,b);
    return 0;
}