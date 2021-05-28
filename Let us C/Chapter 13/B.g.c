#include<stdio.h>
#include<stdlib.h>

void modify(int*,int);


int main()
{
    int *array, i,n;
    printf("How many numbers do you want to save: ");
    scanf("%d",&n),
    array = (int *) malloc(n * sizeof (int));
    for(i=0;i<n;i++)
    {
        printf("Enter %d th number:   ",i+1);
        scanf("%d",&array[i]); 
    }
    modify(array,n);
    for(i=0;i<n;i++)
        printf("\n %d ",array[i]);
    return 0;
}


void modify(int array[],int n)
{
    int i;
    for(i=0;i<n;i++)
        array[i]=3*array[i];
}