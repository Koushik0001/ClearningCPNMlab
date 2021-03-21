#include<stdio.h>
void revert(int);
int main()
{
    int arr[5], arr2[5];int i,n;
    n=4;
    for(i=0;i<=4;i++)
    {
        printf("What is the the number.");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++)
    {
        arr2[n]=arr[i];
        n--;
    }
    for(i=0;i<=4;i++)
        printf("%d           ",arr2[i]);
    return 0;
}