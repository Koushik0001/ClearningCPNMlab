#include<stdio.h>
int main()
{
    int s[][2]= {
                    {12345,45},
                    {12346,46},
                    {12347,47},
                    {12348,48},
                };
    int i;
    for(i=0;i<4;i++)
    {
        printf("base adress of %d th 1-d array= %u\n",i,&s[i]);
    }
    return 0;
}