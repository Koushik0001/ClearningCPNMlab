/* 1. Write a program in C to reverse the contents of the elements of an integer array*/
#include<stdlib.h>
#include<stdio.h>

void xrev(int *array, int n)
{
    for(int i=0; i<n/2; i++)
    {
        int t;
        t = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = t;
    }
}
int main()
{
    int *array, n;
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    array = (int*)malloc(n * sizeof(int));
    printf("Enter the integers : ");
    for(int i=0; i<n; i++)
        scanf("%d",&array[i]);
    xrev(array,n);
    for(int i=0; i<n; i++)
        printf("%d ",array[i]);
    return 0;
}