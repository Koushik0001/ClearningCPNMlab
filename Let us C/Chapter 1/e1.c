#include<stdio.h>
void main()
{
    float bs,gs;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f",&bs);
    gs= bs+0.4*bs+0.2*bs;
    printf(" The salary is %10.3f",gs);
}