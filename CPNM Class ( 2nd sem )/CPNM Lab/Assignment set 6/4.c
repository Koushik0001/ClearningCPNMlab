/* 4. Write a menu-driven program for solving a system of linear equations using Gauss-Elimination 
method, Jacobi’s method and Gauss Elimination with pivoting method*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float *results,**coefficients;
int n;
void gauss();
void pivoting(int);

int main()
{
    int i,j;
    printf("Enter the number of unknowns : ");
    scanf("%d",&n);
    coefficients = (float**)malloc(n * sizeof(float*));
    for(i=0;i<n;i++)
        coefficients[i] = (float*)malloc(n+1 *sizeof(float));
    results = (float*)malloc(n * sizeof(float));
    printf("Enter the coefficients: \n\t");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%f",&coefficients[i][j]);
        printf("\t");
    }
    printf("\nEnter the b matrix : \n\t\t");
    for(i=0;i<n;i++)
    {
        scanf("%f",&coefficients[i][n]);
        printf("\t\t");
    }
    printf("\nThe equations are : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!= n-1)
                printf("%.3fx%d + ",coefficients[i][j],j+1);
            else
                printf("%.3fx%d = %.3f\n",coefficients[i][j],j+1,coefficients[i][n]);
        }
    }
    printf("\n");
    gauss();

    printf("\nThe results are : \n");
    for (i = 0; i <n ; i++)
        printf("x%d = %f\n",i+1,results[i]);
    
    return 0;
}

void gauss()
{
    int i, j=0,k=1,l;
    pivoting(0);
    for (l=0;l<n; l++)
    {
        for(i=l+1; i<n; i++)
        {
            for(j=l; j<=n; j++)
            {
                float t;
                if(j==l)
                    t = coefficients[i][l];
                coefficients[i][j] = coefficients[i][j]- (t*coefficients[l][j]/coefficients[l][l]);
            }
        }
        pivoting(l+1);
    }
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
            results[i] = coefficients[n-1][n]/coefficients[n-1][n-1];
        else
        {
            float sum = 0;
            for(int j=0;j<n-1-i;j++)
                sum += coefficients[i][n-1-j]*results[n-1-j];
            results[i] = (coefficients[i][n]-sum)/coefficients[i][i];
        }
    }
}

void pivoting(int pivot_row)
{
    float * t;
    for(int i=pivot_row;i<n;i++)
    {
        if(fabs(coefficients[pivot_row][pivot_row])<fabs(coefficients[i][pivot_row]))
        {
            t = coefficients[pivot_row];
            coefficients[pivot_row] = coefficients[i];
            coefficients[i] = t;
            continue;
        }
    }
}