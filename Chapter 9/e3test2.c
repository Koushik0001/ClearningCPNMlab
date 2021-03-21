#include<stdio.h>
#include<math.h>
int main()
{
    float x, rM, rA, power;
    printf("x?\n");
    scanf("%f\n",&x);
    rA=x;
    int y=3, newy, count;
    for(count=1;count<=10;count++)
    {
        rM=(x/y)*(x/(y-1))*x;
        for(newy=y-1;newy>1;newy--)
            rM=rM*(x/(newy-1));
        printf("last rM=%f\n", rM);
        rA=rA+(power*rM);
        power=pow(-1,count);
        printf("last power=%f\n",power);
        printf("last rA=%f\n",rA);
        y=y+2;
    }
    printf("result = %f\n",rA);
}