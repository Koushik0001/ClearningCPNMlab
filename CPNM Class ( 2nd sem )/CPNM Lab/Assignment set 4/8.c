/* 8. Write a C program which accepts a matrix and prints its transpose.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    float **matrix;
    int r,c;
    printf("Enter the order of the matrix : ");
    scanf("%d%d",&r,&c);
    matrix = (float**)malloc(r * sizeof(float*));
    for(int i=0; i<r; i++)
        matrix[i] = (float *)malloc(c * sizeof(float));
    
    printf("\nEnte the elements of matrix : \n");
    for (int i=0;i<r; i++)
    {
        for (int j=0;j<c;j++)
            scanf("%f",&matrix[i][j]);        
    }
    printf("The transpose matrix is : \n");
    for(int i =0; i<c ; i++)
    {
        for(int j=0; j<r; j++)
            printf("%.2f ",matrix[j][i]);
        printf("\n");
    }
    return 0;
}