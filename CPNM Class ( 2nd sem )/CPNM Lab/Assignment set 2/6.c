/* 6. Write a C Function to sort an array of 5 elements. The array should be passed as arguments of the 
function. */
#include<stdio.h>
#include<stdlib.h>

void sort(int);
int sorted[100], i=0;
int main()
{
    printf("Enter the number the number of elements in the array: ");
    int n, j;
    scanf("%d",&n);

    int *array = (int*)malloc(n * sizeof(int));

    printf("Enter the elements: ");
    for(j=0;j<n;j++)
        scanf("%d",&array[j]);
    for(j=0;j<n;j++)
        sort(array[j]);
    printf("The sorted array is : ");
    for(j=0;j<n;j++)
        printf("%d ",sorted[j]);
    return 0;
}

void sort(int num)
{
    if(i==0)
        sorted[i] = num;
    else
    {
        sorted[i]=num;
        int k=i;
        while(k>=1 && sorted[k]<sorted[k-1])
        {
            int t = sorted[k];
            sorted[k] = sorted[k-1];
            sorted[k-1] = t;
            k--;
        }
    }
    i++;
}