/*1. If a three-digit integer is input through the keyboard, write a program to calculate the sum of its
digits. (Hint: Use the modulo operator ‘%’)
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the three digit intiger : ");
    scanf("%d",&num);

    int sum = (num-num%100)/100  +  (num%100-num%10)/10  +  num%10;
    
    printf("The sum of the digits of the digits of the number is : %d",sum);

    return 0;
}