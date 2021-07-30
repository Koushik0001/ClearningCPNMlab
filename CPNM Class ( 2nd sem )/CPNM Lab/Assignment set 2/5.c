/* 5. Write a program in C to store n numbers in an array and print the elements using pointers. Also 
compute the sum of all elements of that array using pointers.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter the number the number of elements in the array: ");
    int n, i;
    scanf("%d",&n);

    int *array = (int*)malloc(n * sizeof(int));

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    printf("The elements of the array are : ");
    for(i=0;i<n;i++)
        printf("%d ",*(array+i));
    
    int sum=0;
    for(i=0;i<n;i++)
        sum += *(array + i);
    printf("\nThe sum of the elements of the array is : %d",*(&sum));

    return 0;
}
