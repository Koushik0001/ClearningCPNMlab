#include <stdio.h>
 /* print Fahrenheit-Celsius table
 for celcius = -273, -274, -275...,100; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = -273; /* lower limit of temperatuire scale */
    upper = 123; /* upper limit */
    step = 20; /* step size */
    celsius = lower;
    printf("\n\n");
    printf("Celsius\tFarenhite\n");
    while (celsius < upper)
    {
        fahr=((9.0/5.0) * celsius)+32;
        printf("%5.0f %10.2f\n",celsius,fahr);
        celsius = celsius + step;
    }
    return 0;
}