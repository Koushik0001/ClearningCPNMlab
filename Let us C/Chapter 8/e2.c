#include<stdio.h>
float power(float,int);
int main()
{
    float num, ans;
    int pow;
    printf("           What is the number\n");
    scanf("%f",&num);
    printf("           what is its power?\n");
    scanf("%d",&pow);
    ans = power(num, pow);
    printf("              %f^%d = %f",num,pow,ans);
    return 0;
}
float power(float num,int pow)
{
    int count;float num2;
    if(pow==1)
        return(num);
    else
    {
        num2=num*num;
        for(count=2;count<pow;count++)
            num2=num2*num;
        return(num2);
    }
}