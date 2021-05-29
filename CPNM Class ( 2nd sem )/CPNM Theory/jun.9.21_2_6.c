#include<stdio.h>
//Write C code and Algorithm to compute the series 1,3,9,27,81.....n terms.
int main()
{
    int i=1, j=1;
    printf("%15d\n",j);
    do
    {
        j=j*3;
        printf("%15d\n",j);
        i++;
    }while(j<2147483647);
    return 0;    
}