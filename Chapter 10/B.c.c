#include<stdio.h>
int rec(int);
int main()
{   
    for (int i=1;i<=46;i++)
        printf("%d\n",rec(i));
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