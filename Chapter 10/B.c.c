#include<stdio.h>
int rec(int);
int main()
{   
    int i=1;
    while(rec(i)<2147483647)
    {
        printf("%d\n",rec(i));
        i++;
    }
    printf("%d",i);
    return 0;
}
int rec(int x)
{
    int y;
    if(x==1)
        return(1);
    else if (x==0)
    {
        return 0;
    }
    
    else
    {
        y = rec(x-1)+rec(x-2);
        return (y);
    }
}