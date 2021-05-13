#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **arr, i, j ,r;

    printf("Eenter the rank of the square patrix: ");
    scanf("%d",&r);

    arr=(int**) malloc(r * sizeof(int*));

    for(i=0;i<r;i++)
        arr[i]=(int*) malloc(r * sizeof(int));

    for(i=0;i<r;i++)
    {
        printf("Enter the elements of the %d th row: ",i+1);
        for(j=0;j<r;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=i;j<r;j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                printf("The matrix is not symmetric.");
                exit(1);
            }
        }
    }

    printf("The matrix is symmetric");
    return 0;
}