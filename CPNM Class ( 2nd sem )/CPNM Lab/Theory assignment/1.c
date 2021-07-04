/*1. Write a C program to find the maximum element in an array. */

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *array,nn;
    printf("Enter the number of elements: ");
    scanf("%d",&nn);
    array = (int*) malloc(nn * sizeof(int));
    for(int i=0;i<nn;i++)
        scanf("%d",&array[i]);
    int x = array[0];
    for(int i=0;i<nn;i++)
    {
        if(array[i]>x)
        {
            x=array[i];
            continue;
        }
    }
    printf("max = %d",x);
    return 0;
}