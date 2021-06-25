#include<stdio.h>

int main()
{
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