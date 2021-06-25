#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a, i, ne;
    printf("Enter the number of elements: ");
    scanf("%d",&ne);
    a = (int *)malloc(ne*sizeof(int));
    printf("Enter the elements :");
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
    for (i=0; i<ne; i++)
        printf("%d\t",a[i]);
    
    return 0;
}