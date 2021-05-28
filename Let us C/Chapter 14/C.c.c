#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a; int r,c,i,j,t=0;


    printf("Enter the digree(row * column) of the square matrix: ");
    scanf("%d%d",&r,&c);


    a=(int**)malloc(r*sizeof(int*));

    for(i=0;i<r;i++)
        a[i]=(int*)malloc(c*sizeof(int));


    for(i=0;i<r;i++)
    {   
        printf("Enter the elements(%d elements)of the %d row: ",c,i);
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<r;i++)
    {
        for(j=i;j<c;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }


    printf("The transpose of the input matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
