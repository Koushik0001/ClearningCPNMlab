/* Every year that is exactly
divisible by four is a leap year,
except for years that are exactly divisible by 100, 
but these centurial years are leap years if they are 
exactly divisible by 400. For example, the years 1700, 
1800, and 1900 are not leap years, but the years 1600 and 2000 are.*/

#include <stdio.h>
int main()
{
    int year, rem1, rem2, rem3;
    printf("enter the year\n");
    scanf("%d", &year);
    rem1 = year % 4;
    rem2 = year % 100;
    rem3 = year % 400;
    if (((rem1 == 0) && (rem2 != 0)) || ((rem2 == 0) && (rem3 == 0)))
        printf("The year is leap year.");
    else
        printf("The year is not a leap year.");

    return 0;
}