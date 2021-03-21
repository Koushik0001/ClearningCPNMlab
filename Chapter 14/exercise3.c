#include<stdio.h>
#include<stdlib.h>
int main()
{
    float **a, t; int r,c,i,j;
    printf("Enter the digree(row column) of the matrix: ");
    scanf("%d%d",&r,&c);
    a=(float**)malloc(r*sizeof(float*));
    for(i=0;i<r;i++)
    {
        a[i]=(float*)malloc(c*sizeof(float));
    }
    for(i=0;i<r;i++)
    {   
        printf("Enter the elements(%d elements)of the %d row: ",c,i);
        for(j=0;j<c;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0,j=0;i<r;i++,j++)
    {  
         for(;j<c;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
            //printf("a[%d][%d]=%f    a[%d][%d]=%f\n",i,j,a[i][j],j,i,a[j][i]);
        }
        //j=j+1;
        //printf("value of j after %d row is %d",i,j);
    }
    printf("The transpose of the input matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %f",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
