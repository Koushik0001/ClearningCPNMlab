/* 16. Write a C program which accepts 100 integers and displays the counts of positives, negatives and 
zeros entered.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *num, n, negetive=0,positive=0,zero=0;
    printf("\n\nEnter the number of intigers : ");
    scanf("%d",&n);
    num = (int *) malloc(n * sizeof(int));
    printf("Enter the numbers : ");
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(int i=0;i<n;i++)
    {
        if(num[i]>0)
            positive++;
        else if(num[i]==0)
            zero++;
        else if(num[i]<0)
            negetive++;
    }
    printf("The counts of :\n\t\t1)positivs : %d\n\t\t2)negetives : %d\n\t\t3)zero : %d\n\n",positive,negetive,zero);
    return 0;
}