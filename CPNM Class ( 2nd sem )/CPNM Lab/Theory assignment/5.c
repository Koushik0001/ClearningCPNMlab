/* 5. Write a C program to search an item and find the occurrences of it in a given array. Also print 
the address(s) of the elements. Use as data type. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *array,*sarray,nn,ne, occurrences;
    int **addresses;
    printf("Enter the number of elements: ");
    scanf("%d",&nn);
    array = (int*) malloc(nn * sizeof(int));
    addresses = (int**) malloc(nn * sizeof(int*));
    fflush(stdin);
    for(int i=0;i<nn;i++)
        scanf("%d",&array[i]);
    printf("Enter the number of elements to be searched: ");
    scanf("%d",&ne);
    sarray = (int*) malloc(ne * sizeof(int));

    printf("Enter the elements to be searched: ");
    for(int i=0;i<ne;i++)
        scanf("%d",&sarray[i]);
    for(int i=0;i<ne;i++)
    {
        int k = 0;
        occurrences=0;
        for(int j=0; j<nn ; j++)
        {
            if(sarray[i]==array[j])
            {
                occurrences++;
                addresses[k] = &array[j];
                k++;
            }
        }
        printf("The element %d occurres %d times.\n",sarray[i],occurrences);
        if(k>0)
        {
            printf("The addresses of occurrences of element %d are : ",sarray[i]);
            for(int l=0;l<k;l++)
                printf("%u\t",addresses[l]);
            printf("\n\n");
        }
        else
            printf("\n");
    }
    return 0;
}