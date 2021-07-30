/*7. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = (1^3) + (5^3) + (3^3).*/

#include<stdio.h>

int main()
{
    printf("All Armstrong numbers between 1 and 500 are : \n");
    for(int i = 500;i>0;i--)
    {
        if(i>=100)
        {
            int a, b, c;
            a = i/100;
            b = i%100/10;
            c = i%100%10/1;
            if(i== a*a*a + b*b*b + c*c*c)
                printf("%d\n",i);
        }
        else if(i>=10)
        {
            int a,b;
            a = i/10;
            b = i%10/1;
            if(i == a*a*a + b*b*b)
                printf("%d\n",i);
        }
        else
        {
            int a;
            a = i/1;
            if(i == a*a*a)
                printf("%d\n",i);
        }
        

    }
    return 0;
}