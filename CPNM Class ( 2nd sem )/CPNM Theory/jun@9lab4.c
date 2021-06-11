#include<stdio.h>
int main()
{
    int i=1, j=1;
    for(i=0;i<20;i++)
    {
        printf("%15d\n",j);
        j=j*2;
    }
    return 0;    
}