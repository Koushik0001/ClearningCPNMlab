/* 7. Write a C Function to reverse an array. The function should receive the array through argument and 
return the reversed array. */
#include<stdio.h>
#include <stdlib.h>
void arrayrev(int*,int*);
int main()
{
    printf("Enter the number the number of elements in the array: ");
    int n, j, *array;
    scanf("%d",&n);

    array = (int*)malloc(n * sizeof(int));

    printf("Enter the elements: ");
    for(j=0;j<n;j++)
        scanf("%d",&array[j]);
    
    for(j=0;j<n/2;j++)
        arrayrev(&array[j],&array[n-1-j]);
    for(j=0;j<n;j++)
        printf("%d ",array[j]);
    
    return 0;
}

void arrayrev(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}