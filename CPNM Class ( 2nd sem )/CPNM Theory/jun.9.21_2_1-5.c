#include <stdio.h>
 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    printf("\n\n");
    printf("Farenhite\tCelsius\n");
    for(fahr = upper;fahr >= lower;fahr = fahr - step )
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f %16.2f\n", fahr, celsius);
    }
    return 0;
}