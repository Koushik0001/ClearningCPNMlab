#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *array,n,i,j,t;
    printf("How many numbers do you want to save: ");
    scanf("%d",&n),
    array = (int *) malloc(n * sizeof (int));
    for(i=0;i<n;i++)
    {
        printf("Enter %d th number:   ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array[i]<array[j])
            {
                t=array[i];
                array[i]=array[j];
                array[j]=t;
                continue;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n     %d",array[i]);
    }
    return 0;
}