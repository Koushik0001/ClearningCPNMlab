#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    printf("Enter (x,y): ");
    scanf("(%f,%f)",&x,&y);
    r=sqrt(x*x+y*y);
    theta=atan2(y,x);
    theta=theta*180/3.14;
    printf("(%f,%f)",r,theta);
    return 0;
}