#include<stdio.h>
#include<stdlib.h>
int main()
{
    float **a; int i,j,r,c;
    printf("Enter the order of the matrix (row*column).  ");
    scanf("%d%d",&r,&c);
    a =(float **) malloc(r*sizeof(float*));
    for(i=0;i<r;i++)
    {
        a[i]=(float*) malloc(c*sizeof(float));
    }
    j=c;
    for(i=0;i<r;i++)
    {
        printf("Enter the elements(%d elements) of the %d th row: ",j,i);
        for(j=0;j<c;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            {
            for(j=0;j<c;j++)

                if(a[i][j]!=a[j][i])
                    goto sos;
            }
        }
        printf("The square matrix is symmetric");
        exit(1);
    }
    else
    {
        exit(1);
    }
    
    sos:
    {
       printf("The square matrix is not symmetric.");
       exit(1);
    }
}