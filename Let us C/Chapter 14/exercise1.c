#include<stdio.h>
int main()
{
    double matrix[5][5], *x, *baseadress;int i;
    baseadress=&matrix[0][0];
    x=&matrix[0][0];
    for(i=0;i<5;i++)
    {
        printf("enter 0th,1st ,2nd,3rd,4th element of the %d row: ",i);
        scanf("%lf%lf%lf%lf%lf",&matrix[i][0],&matrix[i][1],&matrix[i][2],&matrix[i][3],&matrix[i][4]);
    }
    
    for(i=0;i<25;i++)
    {
        if(*x<*(baseadress+i))
        {
            x=baseadress+i;
            continue;
        }
    }
    printf("The largest number in the matrix is %lf",*x);
    return 0;
}