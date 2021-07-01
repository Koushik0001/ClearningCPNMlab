#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *array1, frequency;
    printf("Enter the number of elements(n) : ");
    scanf("%d",&n);

    array1 = (int *) malloc(n * sizeof(int));

    printf("Enter the elements : \n\t");
    for(int i=0; i<n ; i++)
        scanf("%d",&array1[i]);

    printf("\n");

    frequency = 1;
    for(int i=0; i<n ;i++)
    {
        int t = array1[i];
        for(int j=i+1; j<n;j++)
        {
            if(t == array1[j])
            {
                for(int k=j; k<n-1 ; k++)
                    array1[k] = array1[k+1];
                n--;
                frequency++;
                j--;/*this 'j--',along with 'j++' keeps 'j' at the same point until 't' becomes not equql to
                    'array[j]', when 't' becomes != array[j] only 'j++' operation is performed and 'j' advance.*/
            }
        }
        printf("Frequency of element'%d' is %d\n",t,frequency);
        frequency = 1;
    }
    int x = array1[0];
    for(int i=1;i<n;i++)
    {
        if(x < array1[i])
        {
            x = array1[i];
            continue;
        }
    }
    printf("\nThe largest element of the array is %d\n",x);
    x=array1[0];
    for(int i=1;i<n;i++)
    {
        if(x > array1[i])
        {
            x = array1[i];
            continue;
        }
    }
    printf("The smallest element of the array is %d",x);
    return 0;
}