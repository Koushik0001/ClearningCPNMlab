#include<stdio.h>
void revert(int);
int main()
{
    int arr[25]; int i,posecount,negecount,oddcount,evencount;
    posecount=0; negecount=0;oddcount=0;evencount=0;
    for(i=0;i<=24;i++)
    {
        printf("Enter the %d th number.",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=24;i++)
    {
        if(arr[i]>0)
            posecount++;
        else if(arr[i]<0)
            negecount++;
    }
    for(i=0;i<=24;i++)
    {
        if(((arr[i])%2)==0)
            evencount++;
        else
            oddcount++;
    }
    printf("there are %d psetivenumbers.\nthere are %d negetive numbers.\nthere are %d odd numbers.\nthere are %d even numbers.",posecount,negecount,oddcount,evencount);
    return 0;
}