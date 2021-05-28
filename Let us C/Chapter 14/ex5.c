#include<stdio.h>
void display(int s2[3][4],int, int);
int main()
{
    int s[3][4]= {
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,0,1,6}
                };
display(s,3,4);
return 0;
}
void display(int s2[3][4],int row,int column)
{
    int i, j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d   ",s2[i][j]);
        printf("\n");
    }
}