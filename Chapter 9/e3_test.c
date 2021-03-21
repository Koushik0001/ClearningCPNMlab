#include<stdio.h>
int main()
{
    float x, rm;
    printf("enter x\n");
    scanf("%f",&x);
    float newx=(x-1);
    rm=(newx/x)*((newx-1)/x);
    for(newx=x-2;newx>1;newx--)
        rm=((newx-1)/x)*rm;
    printf("result = %f",rm);
    return 0;
}