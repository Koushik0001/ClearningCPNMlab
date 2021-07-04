/* 12.b. Write a program in C to read n number of values in an array. After that, display the
frequency of each element present in that array (i.e. count the total number of duplicate
elements in that array). Then find the element having minimum and maximum frequency .
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *array1,*frequencies_of_elements, frequency;
    printf("Enter the number of elements(n) : ");
    scanf("%d",&n);

    array1 = (int *) malloc(n * sizeof(int));
    frequencies_of_elements = (int *) malloc(n * sizeof(int));

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
        frequencies_of_elements[i]=frequency;
        frequency = 1;
    }

    int x = frequencies_of_elements[0];
    for(int i=0; i<n ; i++)
    {
        if(x<frequencies_of_elements[i])
        {
            x=frequencies_of_elements[i];
            continue;
        }
    }

    printf("The element(s) with highest frequency %d is (are) : ",x);
    for(int i=0; i<n ; i++)
    {
        if(frequencies_of_elements[i] == x)
            printf("%d ",array1[i]);
    }
    printf("\n");

    x = frequencies_of_elements[0];
    for(int i=0; i<n ; i++)
    {
        if(x>frequencies_of_elements[i])
        {
            x=frequencies_of_elements[i];
            continue;
        }
    }

    printf("The element(s) with lowest frequency %d is (are) : ",x);
    for(int i=0; i<n ; i++)
    {
        if(frequencies_of_elements[i] == x)
            printf("%d ",array1[i]);
    }

    return 0;
}