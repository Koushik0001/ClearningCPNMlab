/*2.a. An integer is entered as an input through the keyboard. Write a program to find out
whether it is an odd number or an even number.*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the three digit intiger : ");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("\t\t\tEVEN Number");
    else
        printf("\t\t\tODD Number");
    return 0;
}