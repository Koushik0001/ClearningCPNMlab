/* Any interger is input through the keyboard.Write
a program to find out whether it is an odd number or
even number. */

#include<stdio.h>
int main()
{
int intg, remainder;
printf("What is the integer?\n");
scanf("%d",&intg);
remainder = intg % 2;
if(remainder==0)
    printf("The integer is an even number.");
else
    printf("The integer is an odd number.");

return 0;
}