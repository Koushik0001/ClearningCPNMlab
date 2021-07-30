/*4. Write a C program which accepts basic salary as input and prints the gross salary, which is sum of
the basic, dearness allowance (60% of basic salary), and house rent allowance (15% of basic
salary).*/

#include<stdio.h>

int main()
{
    float basic, dearness, house, gross;
    printf("Enter the basic salary : ");
    scanf("%f",&basic);
    
    dearness = 0.6 * basic;
    house = 0.15 * basic;
    gross = basic + dearness + house;

    printf("Gross salary is %.2f",gross);

    return 0;
}