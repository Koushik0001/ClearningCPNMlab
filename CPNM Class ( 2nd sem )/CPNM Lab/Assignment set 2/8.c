/* 8. Write a function which merges two sorted arrays in such a way that the final array is also sorted. The 
function should receive two sorted arrays and return one sorted array. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(int*,int);
int* merge(int*,int,int*,int);
int main()
{
    int j,n1, *array1, n2, *array2, *merged;

    printf("\n\nEnter the number the number of elements in array1: ");
    scanf("%d",&n1);
    array1 = (int*)malloc(n1 * sizeof(int));
    printf("Enter the elements: ");
    for(j=0;j<n1;j++)
        scanf("%d",&array1[j]);
    sort(array1,n1);

    printf("\n\nEnter the number the number of elements in array2: ");
    scanf("%d",&n2);
    array2 = (int*)malloc(n2 * sizeof(int));
    printf("Enter the elements: ");
    for(j=0;j<n2;j++)
        scanf("%d",&array2[j]);
    sort(array2,n2);

    merged = merge(array1,n1,array2,n2);

    printf("\n\nThe merged array is : ");
    for(int i=0; i<n1+n2; i++)
        printf("%d ",merged[i]);
    printf("\n\n");
    return 0;
}

void sort(int *A,int nn)
{
    int j, i;
    for(j=1;j<nn;j++)
    {
        i=j-1;
        while((i>=0) && (A[i]>A[i+1]))
        {
            int t;
            t=A[i];
            A[i]=A[i+1];
            A[i+1]=t;

            i--;
        }
    }
}

int* merge(int* array1, int n1, int *array2, int n2 )
{
    int i=0,k=0,l=0, *merged;
    merged = (int *) malloc((n1+n2) * sizeof(int));
    while(k<n1 && l<n2 )
    {
        if(array1[k]<array2[l])
        {
            merged[i]=array1[k];
            k++;
        }
        else
        {
            merged[i] = array2[l];
            l++;
        }
        i++;
    }
    
    if(k<n1)
    {
        while(i<n1+n2)
        {
            merged[i] = array1[k];
            k++;
            i++;
        }
    }
    else if(l<n2)
    {
        while(i<n1+n2)
        {
            merged[i] = array2[l];
            l++;
            i++;
        }
    }
    return(merged);
}