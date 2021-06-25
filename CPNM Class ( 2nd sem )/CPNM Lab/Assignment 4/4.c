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