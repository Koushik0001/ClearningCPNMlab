/*2. Write a C program to arrange an array in descending order.*/

#include<stdio.h>
#include<stdlib.h>

void swap(int*,int*);

int main()
{
    int *array,nn;
    printf("Enter the number of elements: ");
    scanf("%d",&nn);
    array = (int*) malloc(nn * sizeof(int));
    for(int i=0;i<nn;i++)
        scanf("%d",&array[i]);
    for(int i=0; i<nn; i++)
    {
        int j = i;
        while(array[j-1]<array[j] && j-1>=0)
        {
            swap(&array[j],&array[j-1]);
            j--;
        }
    }
    for(int i=0; i<nn; i++)
        printf("%d ",array[i]);
    return 0;
}
void swap(int* a,int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

