#include<stdio.h>
int main()
{
    int i=1, j=1;
    do
    {
        printf("%15d\n",j);
        j=j*2;
        i++;
    }while(i<21);

    return 0;    
}