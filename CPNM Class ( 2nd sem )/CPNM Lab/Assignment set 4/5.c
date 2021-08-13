/* 5. Write a C program which accepts ten integers from user and prints them in ascending order. Use 
array to store the integers.*/

#include<stdio.h>
#include<stdlib.h>

void sort(int*, int);
void swap(int*, int*);
int main()
{
    int *array,n, i, range;
    printf("\n\nHow many numbers you want to enter : ");
    scanf("%d",&n);
    array = (int *) malloc(n * sizeof(int));
    printf("Enter the integers : ");
    for ( i = 0; i <n; i++)
        scanf("%d",&array[i]);
    sort(array,n);
    for ( i = 0; i <n; i++)
        printf("%d ",array[i]);
    return 0;
}

void sort(int *array, int n)
{
    for(int i=0; i<n; i++)
    {
        int j=i; 
        while(array[j]<array[j-1] && j!= 0 )
        {
            swap(&array[j],&array[j-1]);
            j--;
        }
    }
}

void swap(int*x, int*y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}