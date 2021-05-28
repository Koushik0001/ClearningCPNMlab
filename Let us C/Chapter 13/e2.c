#include<stdio.h>
void revert(int);
int main()
{
    float arr[25],snum; int i, count=0;
    for(i=0;i<=24;i++)
    {
        printf("enter the %d th number",i);
        scanf("%f",&arr[i]);
    }
    printf("Enter the number to be searched.     ");
    scanf("%f",&snum);
    for(i=0;i<=24;i++)
    {
        if((snum-arr[i])==0)
            count++;
    }
    if(count>0)
    {
        printf("Match found.\n");
        printf("The number is present %d times.",count);
    }
    else
    {
        printf("No match found.");
    }
    return 0;
}