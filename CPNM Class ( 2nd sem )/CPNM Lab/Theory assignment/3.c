/*3. Write a C program to print the last element and its address in a given array.*/

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
    printf("The last element of the array is %d\nThe address of the last element is %u",array[nn-1],&array[nn-1]);
    return 0;
}