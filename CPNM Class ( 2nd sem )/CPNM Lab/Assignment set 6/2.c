/* 2. Use the above program to find 3 roots of the equation xtan(x)=c where c is a user-input constant. 
Use both bisection method and Newton-Raphson method.*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define et 0.0001

float fx(float);
float dfx(float);

int bisection(float*, float*, float*,int*,int*);
void Newton_Raphson(float,float* );

float c;
int n = 0;

int main()
{
    float resultb, resultn, x1, x2;
    int s,count,op;
    char r;
    printf("Enter the value of c : ");
    scanf("%f",&c);
    do
    {    
        printf("Which method you want to apply : \n\t\t1)Bisection Methpd\n\t\t2)Newton-Raphson");
        scanf("%d",&op);
        switch (op)
        {
            case 1:
                for(int i=0; i<3; i++)
                {
                    printf("\n\nEnter initial values for Bisection Method : ");
                    scanf("%f%f",&x1,&x2);
                    bisection(&x1,&x2,&resultb,&s,&count);
                    while(s==0)
                    {
                        printf("Starting points do not bracket any root : ");
                        printf("Enter the initial values again : ");
                        scanf("%f%f",&x1,&x2);
                        bisection(&x1,&x2,&resultb,&s,&count);
                    }
                    printf("Root of the equation in the range (%f,%f) is %f\t",x1,x2,resultb);
                }
                break;
            case 2:
                for(int i=0; i<3; i++)
                {
                    printf("\nEnter initial value for Newton-raophson method : ");
                    scanf("%f",&x1);
                    Newton_Raphson(x1,&resultn);
                    printf("Root of the equation in the range %f is %f\t",x1,resultn);
                }
                printf("\n\n");
        }
        printf("do you want to run again?(y/n) ");
        fflush(stdin);
        scanf("%c",&r);
    }while(r == 'y');
    return 0;
}

int bisection(float *a, float *b, float* root, int *s, int*count)
{
    long double x0,x1,x2,f0,f1,f2;
    x1 = *a;
    x2 = *b;
    f1 = fx(x1);
    f2 = fx(x2);
    if(f1*f2 > 0)
    {
        *s = 0;
        return 0;
    }

    else
    {
        *count = 0;
        begin:
            x0 = (x1+x2)/2.0;
            f0 = fx(x0);
            if(f0 == 0)
            {
                *s = 1;
                *root = x0;
                return 0;
            }
            if(f1*f0 < 0)
                x2 = x0;
            else
            {
                x1 = x0;
                f1 = f0;
            }
            if(fabs((x2-x1)/2) < et)
            {
                *s = 1;
                *root = (x1+x2)/2.0;
                return 0;
            }
            else
            {
                *count++;
                goto begin;
            }
    }
}

void Newton_Raphson(float x0,float *resultn)
{
    float x1 = x0 - (fx(x0)/dfx(x0));
    if(fabs((x1-x0)/x1)<=et)
        *resultn = x1;
    else
        Newton_Raphson(x1,resultn);
}

float fx(float x)
{
    return((x*tan(x)-c));
}
float dfx(float x)
{
    return((x*pow(1/cos(x),2) + tan(x)));
}