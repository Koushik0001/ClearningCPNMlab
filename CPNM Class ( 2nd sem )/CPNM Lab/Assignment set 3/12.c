/* 12. Write a program to print the multiplication table of the number entered by the user. The table 
should get displayed in the following form.
                            29 * 1 = 29
                            29 * 2 = 58
                            ... ... ...*/

#include<stdio.h>
                            
int main()
{
    int num, i, product;
    printf("Enter the number : ");
    scanf("%d",&num);
    for (i=1; i<=20 ; i++)
    {
        product = num * i;
        printf("%d * %d = %d\n",num,i,product);
    }
    return 0;
}