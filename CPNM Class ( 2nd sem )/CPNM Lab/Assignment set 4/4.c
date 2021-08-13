/* 4. Write a program to find the range of a set of integers entered by the user. Range is the difference 
between the smallest and biggest number in the list*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *array,n, i, range;
    printf("\n\nHow many numbers you want to enter : ");
    scanf("%d",&n);
    array = (int *) malloc(n * sizeof(int));
    printf("Enter the integers : ");
    for ( i = 0; i <n; i++)
        scanf("%d",&array[i]);
    int biggest = array[0];
    for(i=0; i<n ; i++)
    {
        if(biggest < array[i])
        {
            biggest = array[i];
            continue;
        }
    }
    int smallest = array[0];
    for(i=0; i<n ; i++)
    {
        if(smallest > array[i])
        {
            smallest = array[i];
            continue;
        }
    }

    range = biggest - smallest;
    printf("Range = %d\n\n",range);
    return 0;
}