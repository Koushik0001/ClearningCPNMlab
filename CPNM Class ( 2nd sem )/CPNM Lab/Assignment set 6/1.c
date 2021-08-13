/* 1. Write a menu-driven program for finding roots of a nonlinear equation using Bisection, Regula 
Falsi and Newton-Raphson method.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define et 0.0000001
float resultb, resultr, resultn, *coefficients,*df, x1, x2;
int n,x=0;


float mod(float);
float function(float );
void initial_values();
float dfx(float);

void regula_falsi(float, float);
void bisection(float, float);
void Newton_Raphson(float );

int main()
{
    printf("\n\nEnter the order of the eauation : ");
    scanf("%d",&n);
    coefficients = (float*) malloc(n+1 * sizeof(float));
    df = (float* ) malloc(n * sizeof(float));
    printf("\n");
    for(int i=0; i<=n; i++)
    {
        printf("Eneter coefficient of x^%d : ",n-i);
        scanf("%f",&coefficients[n-i]);
    }
    initial_values();
    if(function(x1)*function(x2)>0)
    {
        printf("\nEnter the initial values: ");
        scanf("%f%f",&x1,&x2);
    }
    bisection(x1,x2);
    printf("Bisection Method Result = %f\n",resultb);
    regula_falsi(x1,x2);
    printf("Regula Falsi Method Result = %f\n",resultr);
    Newton_Raphson(x2);
    printf("Newton-Raphson result = %f\n\n",resultn);
    
    return 0;
}

float mod(float x)
{
    if(x<0)
        return(0-x);
    else if(x>=0)
        return(x);
}

float function(float x)
{
    float fx=0;
    for(int i=0; i<=n; i++)
        fx += pow(x,n-i)*coefficients[n-i];
    return(fx);
}

void initial_values()
{
    int x=0;
    float i=0,j=0,k;
    if(mod(coefficients[0])>100)
        k=10;
    else
        k=0.00001;
    while(x<20000)
    {
        if(function(i)*function(0) <0)
        {
            x2 = i;
            break;
        }
        if(function(j)*function(0)<0)
        {
            x2 = j;
            break;
        }
        j += k;
        i -= k;
        k *= 3;
        x++;
    }
}

void regula_falsi(float a, float b)
{
    float x = a - (b-a)*function(a)/(function(b)-function(a));
    if((function(a) * function(b) <0) && mod((b-a)/b)>et)
        regula_falsi(a,x);
    else if(mod((b-a)/b)<et)
        resultr = (a+b)/2;
    else 
        regula_falsi(b,x);
}

void bisection(float a, float b)
{
    float x = (a+b)/2;
    if((function(a) * function(x) <0) && mod(function(x)-0)>et)
        bisection(a,x);
    else if(mod((b-a)/b)<et)
        resultb = (a+b)/2;
    else
        bisection(b,x);
}

float dfx(float a)
{
    float dresult=0;
    for(int i=0; i<n; i++)
        df[n-i-1] = (n-i)*coefficients[n-i];
    for (int i=0; i<n; i++)
        dresult += df[n-i-1] * pow(a,n-i-1);
    return(dresult);    
}

void Newton_Raphson(float x0)
{
    float x1 = x0 - (function(x0)/dfx(x0));
    if(mod((x1-x0)/x1)<et)
        resultn = x1;
    else
        Newton_Raphson(x1);

}