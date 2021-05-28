#include<stdio.h>
int main()
{
    int s[][2]= {
                    {12345,45},
                    {12346,46},
                    {12347,47},
                    {12348,48},
                };
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
            printf("%d    ",*(&s[i][j]));
        printf("\n");
    }
    return 0;
}