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
        printf("Enter the elements(%d elements)of the %d row of 1st matrix: ",c,i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    
    for(i=0;i<r;i++)
    {   
        printf("Enter the elements(%d elements)of the %d row of 2nd matrix: ",c,i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&t);
            a[i][j]=a[i][j] + t;
        }
    }
    printf("\n\n");
    printf("\nHere is the matrix after adding the two: \n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
