/* 4. Write a menu-driven program for solving a system of linear equations using Gauss-Elimination 
method, Jacobi’s method and Gauss Elimination with pivoting method*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define et 0.0001

float *results,**coefficients,*current_values,*new_values;
int n,num=0;

void gauss();
void pivoting(int);
void jacobi();
int compare();

float vinva(int);

int main()
{
    int i,j, op;
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
    printf("Which you want to use :\n\t1)Gauss Elimination with pivoting method\n\t2)Jacobi\'s method: ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        gauss();
        printf("\nThe results are : \n");
        for (i = 0; i <n ; i++)
            printf("x%d = %f\n",i+1,results[i]);
        break;
    
    case 2:
        current_values = (float*)malloc(n * sizeof(float));
        new_values = (float*)malloc(n * sizeof(float));
        printf("Enter the initial values for jacobi\'s Method : \n");
        for (i=0; i<n; i++)
        {
            printf("x%d = ",i+1);
            fflush(stdin);
            scanf("%f",&current_values[i]);
        }
        jacobi();
        printf("The results are : ");
        for (i=0; i<n; i++)
            printf("\nx%d = %f",i+1, new_values[i]);
        break;
    }
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

void jacobi()
{   
    for (int j=0;j<n; j++)
        new_values[j] = vinva(j);
    if(compare() ==0 || num == 0)
    {
        for (int i=0;i<n; i++)
            current_values[i] = new_values[i];
        num++;
        jacobi();
    }
}

int compare()
{
    int i;
    float *defference,x;
    defference = (float * )malloc(n * sizeof(float));
    for (i= 0; i<n ; i++)
        defference[i] = fabs(new_values[i]-current_values[i]);
    x = defference[0]; 
    for (i= 0; i<n ; i++)
    {
        if(defference[i]>x)
        {
            x=defference[i];
            continue;
        }
    }
    if(x<et)
        return (1);
    else
        return (0);
}

float vinva(int x)
{
    float t1=0,t2,result;
    for(int k=0;k<n;k++)
    {
        if(k != x)        
            t1 += (current_values[k]) * (coefficients[x][k]);
    }
    t2 = coefficients[x][n] - t1;
    result = t2/coefficients[x][x];
    return(result);
}