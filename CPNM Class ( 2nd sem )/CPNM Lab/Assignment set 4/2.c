/* 2. Write a program in C to read n number of values in an array. After that, count the total number of 
duplicate elements in that array. Then copy the elements except the duplicate elements of that array 
into another array and display this array in reverse order.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *array1, *array2, number_of_duplicates;
    printf("Enter the number of elements(n) : ");
    scanf("%d",&n);

    array1 = (int *) malloc(n * sizeof(int));

    printf("Enter the elements : \n\t");
    for(int i=0; i<n ; i++)
        scanf("%d",&array1[i]);

    number_of_duplicates=0;
    for(int i = 0; i<n ;i++)
    {
        int t = array1[i];
        for(int j=i+1 ;j<n; j++)
        {
            if(t == array1[j])
            {
                for(int k=j; k<n-1;k++)
                    array1[k]=array1[k+1];
                n--;
                number_of_duplicates++;
                j--;
            }
        }
    }
    array2 = (int *) malloc(n * sizeof(int));

    for(int i=0; i<n ; i++)
        array2[i]= array1[i];

    printf("The new array : ");
    for (int i=0; i<n; i++)
        printf("%d ",array1[i]);
    printf("\n");

    printf("number duplicates = %d\n",number_of_duplicates);
    printf("Arry in the reverse order : ");
    for (int i=n-1; i>=0; i--)
        printf("%d ",array1[i]);
    return 0;
}    