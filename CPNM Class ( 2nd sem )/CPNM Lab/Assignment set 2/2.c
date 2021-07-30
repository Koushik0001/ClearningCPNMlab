/* 2. A positive integer is entered through the keyboard, write a C function to find the binary equivalent 
of this number using recursion.*/

#include<stdio.h>
#include<string.h>

void binary_equivalent(int);
int i=0;
char bin[100];
int main()
{
    int num;
    printf("\n\n\nEnter the positive Intiger: ");
    scanf("%d",&num);
    binary_equivalent(num);
    printf("The binary equvalent of the positive intiger is : ");
    puts(bin);
    printf("\n\n\n");
    return 0;
}

void binary_equivalent(int num)
{    
    if(num != 0)
    {
        bin[i] = (char)((num % 2)+48);
        i++;
        binary_equivalent(num/2);
    }
    else if(num==0)
    {
        bin[i] = '\0';
        strrev(bin);
    }
}