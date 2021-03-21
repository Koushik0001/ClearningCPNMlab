#include<stdio.h>
#include<math.h>
void sinfx(float *,float *);
int main()
{
    float x, result;
    printf("What is the value of x in sin(x)?\n");
    scanf("sin%f",&x);
    sinfx(&x,&result);
    printf("sin %f = %f",x,result);
    return 0;
}
void sinfx(float *adressx,float *result)
{
    float x, rM, rA;
    x = *adressx;
    rA=x;
    int y=3, newy, count;
    for(count=1;count<=10;count++)
    {
        rM=(x/y)*(x/(y-1))*x;
        for(newy=y-1;newy>1;newy--)
            rM=rM*(x/(newy-1));
        rA=rA+(pow(-1,count)*rM);
        y=y+2;
    }
    *result=rA;
}