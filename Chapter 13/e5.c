#include<stdio.h>
int main()
{
    float arr[25], x ; int i;
    for(i=0;i<25;i++)
    {
        printf("Enter array element no.%d: ",i);
        scanf("%f",&arr[i]);
    }
    x = arr[0];
    for(i=0;i<25;i++)
    {
        if(x>arr[i])
        {
            x=arr[i];
            continue;
        }
    }
    printf("The smallest number in the array is %f",x);
    return 0;
}