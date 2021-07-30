/*11. Write a menu-driven program for accepting values in two square matrix of 3x3 dimension and
generate their sum, difference and product.*/

#include<stdio.h>
#include<stdlib.h>

int** sum_of_matrices(int**,int,int,int**,int,int);
int** difference_of_matrices(int**,int,int,int**,int,int);
int** product_of_matrices(int**,int,int,int**,int,int,int*,int*);
int element(int*,int*,int);


int main()
{
    int **matrix1, r1, c1, **matrix2, r2, c2, **resultant;
    char run = 'n',status='y';
    printf("enter the order (row column) of matrix1 : ");
    scanf("%d%d",&r1,&c1);

    matrix1 = (int**) malloc(r1 * sizeof(int*));
    for (int i=0;i<r1; i++)
        matrix1[i] = (int*) malloc(c1 * sizeof(int));
    printf("\nGive a space after entering each intiger of a row and hit 'enter' after entering the last element of a row. ");
    printf("\nEnte the elements of matrix1 : \n");
    for (int i=0;i<r1; i++)
    {
        for (int j=0;j<c1;j++)
            scanf("%d",&matrix1[i][j]);        
    }

    printf("enter the order (row column) of matrix2 : ");
    scanf("%d%d",&r2,&c2);

    matrix2 = (int**) malloc(r2 * sizeof(int*));

    for (int i=0;i<r2; i++)
        matrix2[i] = (int*) malloc(c2 * sizeof(int));


    printf("Ente the elements of matrix2 : \n");
    fflush(stdin);
    for (int i=0;i<r2; i++)
    {
        for (int j=0;j<c2;j++)
            scanf("%d",&matrix2[i][j]);        
    }

    int rmr = r1,rmc = c1; /*needed specially to print the results of product matrix, 'cause their row column are variable
                    as per the choise first and second matrix*/
    do
    {
        printf("What do you want to do :\n\t1)Sum of the two matrices\n\t2)Difference of the two maitrices\n\t3)product of matrices : ");
        int op;
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                status = 'y';
                if(r1 != r2 || c1 != c2)
                {
                    printf("\nSUMMATION NOT POSSIBLE\n ");
                    status = 'n';
                    break;
                }
                resultant = sum_of_matrices(matrix1,r1,c1,matrix2,r2,c2);
                break;
            case 2:
                status = 'y';
                if(r1 != r2 || c1 != c2)
                {
                    printf("\nSUBTRACTION NOT POSSIBLE\n ");
                    status = 'n';
                    break;
                }
                resultant = difference_of_matrices(matrix1,r1,c1,matrix2,r2,c2);
                break;
            case 3:
                status = 'y';
                resultant = product_of_matrices(matrix1,r1,c1,matrix2,r2,c2,&rmr,&rmc);      
        }
        if(status=='y')
        {
            printf("The result is : \n");
            for (int i=0;i<rmr; i++)
            {
                printf("\t");
                for (int j=0;j<rmc;j++)
                    printf("%8d\t",resultant[i][j]);
                printf("\n");        
            }
        }
        free(resultant);
        printf("Do you want to calculate again(y/n) : ");
        fflush(stdin);
        scanf("%c",&run);
    }while(run == 'y');
    return 0;
}

int** sum_of_matrices(int**matrix1,int r1,int c1 ,int**matrix2,int r2,int c2)
{
    int **resultant;
    resultant = (int**) malloc(r1 * sizeof(int*));
    for (int i=0;i<r1; i++)
        resultant[i] = (int*) malloc(c1 * sizeof(int));
    
    for (int i=0;i<r1; i++)
    {
        for (int j=0;j<c1;j++)
            resultant[i][j]= matrix1[i][j] + matrix2[i][j];      
    }
    return(resultant);
}

int** difference_of_matrices(int**matrix1,int r1,int c1 ,int**matrix2,int r2,int c2)
{
    int op;
    printf("Which matrix you want to subtract from (matrix : 1 or 2) : ");
    scanf("%d",&op);
    int **resultant;
    if(op == 2)
    {
        resultant = matrix2;
        matrix2 = matrix1;
        matrix1 = resultant;
    }
    
    resultant = (int**) malloc(r1 * sizeof(int*));
    for (int i=0;i<r1; i++)
        resultant[i] = (int*) malloc(c1 * sizeof(int));
    
    for (int i=0;i<r1; i++)
    {
        for (int j=0;j<c1;j++)
            resultant[i][j]= matrix1[i][j] - matrix2[i][j];      
    }
    return(resultant);
}

int** product_of_matrices(int**matrix1,int r1,int c1,int** matrix2,int r2,int c2,int* rmr,int* rmc)
{
    printf("Which product do you want :\n\t1)matrix1 * matrix2\n\t2)matrix2 * matrix1 : ");
    int op;
    scanf("%d",&op);
    int **resultant;
    if(op == 2)
    {
        resultant = matrix2;
        matrix2 = matrix1;
        matrix1 = resultant;

        op = r1;
        r1 = r2;
        r2 = op;

        op = c1;
        c1 = c2;
        c2 = op;
    }
    if(c1 != r2)
    {
        printf("MULTIPLICATION NOT VALID");
        exit(1);
    }

    *rmr = r1;
    *rmc = c2;

    resultant = (int**) malloc(*rmr * sizeof(int*));
    for (int i=0;i<r1; i++)
        resultant[i] = (int*) malloc(*rmc * sizeof(int));

    for (int i=0; i<*rmr; i++)
    {
        for(int j=0; j<*rmc; j++)
        {
            int *column = (int*) malloc(r2 * sizeof(int));
            for(int k=0; k<r2; k++)
                column[k] = matrix2[k][j];
            resultant[i][j] = element(matrix1[i],column,r2);
        }
    }
    return(resultant);
}

int element(int *array1,int *array2,int n)
{
    int sum = 0;
    for(int i=0; i<n ; i++)
        sum = sum +((array1[i])* (array2[i]));
    return(sum);
}