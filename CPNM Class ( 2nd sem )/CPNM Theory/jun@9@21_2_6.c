#include<stdio.h>
//Write C code and Algorithm to compute the series 1,3,9,27,81.....n terms.
int main()
{
    int i=1, j=1;
    do
    {
        printf("%15d\n",j);
        j=j*3;
        i++;
    }while(i<20);

    return 0;    
}