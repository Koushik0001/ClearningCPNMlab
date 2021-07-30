/*10. Write a program in C to reverse the contents of the elements of an integer array without using
another array.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a, i, ne;
    printf("Enter the number of elements: ");
    scanf("%d",&ne);
    a = (int *)malloc(ne*sizeof(int));
    printf("Enter the elements (give a space after entering each intiger and an enter at the end) :");
    for (i=0; i<ne; i++)
        scanf("%d",&a[i]);
    int j = (ne/2);
    for (i=0; i<j; i++)
    {
        int temp;
        temp = a[i];
        a[i] = a[ne-1-i];
        a[ne-1-i] = temp;
    }
    printf("The new array : ");
    for (i=0; i<ne; i++)
        printf("%d  ",a[i]);
    
    return 0;
}