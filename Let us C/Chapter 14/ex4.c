#include<stdio.h>
int main()
{
    int s[][2]= {
                    {12345,45},
                    {12346,46},
                    {12347,47},
                    {12348,48},
                };
    int (*p)[2],i,*intp,j;
    for(i=0;i<4;i++)
    {
        p=&s[i];
        intp=(int*)p;
        for(j=0;j<2;j++)
            printf("%d  ",*(intp+j));
        printf("\n");
    }
    return 0;
}    