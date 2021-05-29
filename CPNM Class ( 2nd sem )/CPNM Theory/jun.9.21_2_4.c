#include<stdio.h>
//Write C code And Algorithm to print all odd number from 10 to 100.
int main()
{
    printf("\nAll odd numbers from 10 to 100\n");
    for(int i=11; i<100;i+=2)
    {
        printf("%8d\n",i);
    }
    return 0;
}