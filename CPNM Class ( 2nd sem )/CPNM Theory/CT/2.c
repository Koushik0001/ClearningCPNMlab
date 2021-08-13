#include<stdio.h>
#define et 0.0001
float result;
float mod(float x)
{
    if(x<0)
        return(0-x);
    else if(x>=0)
        return(x);
}
float function(float x)
{
    float a = x*x*x - 2*x*x + x + 7;
    return(a); 
}  
void bisection(float a, float b)
{
    float x = (a+b)/2;
    if((function(a) * function(x) <0) && mod(function(a)-function(x))>et)
    {
        bisection(a,x);
    }
    else if((function(a) * function(x) >0) && mod(function(a)-function(x))<=et)
        result = x;
    else if((function(b) * function(x) <0) && mod(function(b)-function(x))>et)
        bisection(b,x);
}
int main()
{
    bisection(5,-5);
    printf("The result is = %f",result);
    return 0;
}