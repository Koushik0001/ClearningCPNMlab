#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,a;
    printf("Enter (x,y): ");
    scanf("(%f,%f)",&x,&y);
    r=sqrt(x*x+y*y);
    a=tanhf(y/x);
    printf("(%f,%f)",r,a);
    return 0;
}