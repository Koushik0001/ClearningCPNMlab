/*2.b. A cashier has currency notes of denominations 10, 50 and 100. Write a C program which
accepts an amount to be withdrawn, and prints the total number of currency notes of
each denomination the cashier will have to give to the withdrawer.*/

#include<stdio.h>

int main()
{
    int amount;
    printf("Enter the amount to be withdrawn(in multiple of 10) : ");
    scanf("%d",&amount);

    int N100,N50,N10;
    N100 = amount/100;
    N50 = amount%100/50;
    N10 = amount%100%50/10;
    printf("Notes of denominstions 100 = %d\n",N100);
    printf("Notes of denominstions 50 = %d\n",N50);
    printf("Notes of denominstions 10 = %d",N10);
    return 0;
}