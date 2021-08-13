/* 3. Write a C program to find the reverse of a given number. [OPTIONAL]*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int *digits;
int number_of_digits(int num)
{
    float t = num;
    int number_of_digits=0;
    while(t >=1)
    {
        t = t/10;
        number_of_digits++;
    }
    return(number_of_digits);
}
int digit(int num)
{
    int nd = number_of_digits(num),x;
    int t= pow(10,nd-1);
    x =  (num - (num%t))/t;
    return(x);
}
int main()
{
    int num,nd;
    printf("\n\nEnter the number (integer) : ");
    scanf("%d",&num);
    nd = number_of_digits(num);
    digits = (int*) malloc(nd * sizeof(int));
    int t = nd,x;
    for(int i=0; i<nd; i++)
    {
        digits[i] = digit(num);
        x = pow(10,t-1);
        num = num%x;
        t--;
    }   
    int reversed;
    for(int i =nd-1; i>=0;i--)
        reversed += digits[i]*pow(10,i);
    printf("The reverse of the number is = %d\n\n",reversed);
    return 0;
}