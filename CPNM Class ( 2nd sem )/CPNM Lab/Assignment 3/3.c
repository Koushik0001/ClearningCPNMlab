#include<stdio.h>
int main()
{
    int num1, num2;
    float k;

    printf("\n\n\nEnter two intiger numbers : ");
    scanf("%d%d",&num1,&num2);

    
    if(num1>num2)
    {

        k = (1.000 * num1)/num2;
        printf("%d/%d\n%f",num1%num2,num2,k);
    }
    else
    {
        k = (1.000 * num2)/num1;
        printf("%d/%d\n%f",num2%num1,num1,k);
    }
    return 0;
}