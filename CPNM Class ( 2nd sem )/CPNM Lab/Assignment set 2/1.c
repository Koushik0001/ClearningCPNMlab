/* 1. Write a function to compute the distance between two points and use it to develop another 
function that will compute the area of the triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, 
y3). Use these functions to develop a function which returns a value 1 if the point (x, y) lies inside 
the triangle ABC, otherwise a value 0.*/

#include<stdio.h>
#include<math.h>

float distance(float,float,float,float);
float farea(float*,float*);
int point_location(float*,float*,float , float );
void swap(float*, float*);
int main() 
{
    float x[3], y[3], area,a,b;
    int q;
    for(int i= 0; i<3; i++)
    {
        printf("Enter the co-ordinates of point%d (x,y): ",i+1);
        scanf("(%f,%f)",&x[i],&y[i]);
        fflush(stdin);
    }
    area = farea(x,y);
    printf(" area = %f",area);

    printf("\n\nEnter the point(x,y) : ");
    scanf("(%f,%f)",&a,&b);

    q = point_location(x,y,a,b);
    if(q ==1 )
        printf("\nThe point is on or inside the triangle.");
    else if(q==0)
        printf("\nThe point is outside of the triangle.");
    return 0;
}

float distance(float x1, float y1, float x2, float y2)
{
    float distance = sqrt( pow((x1-x2),2) + pow((y1-y2),2));
    return(distance);
}

float farea(float*x, float*y)
{
    float a,b,c,s, area;
    a = distance(x[0],y[0],x[1],y[1]);
    b = distance(x[1],y[1],x[2],y[2]);
    c = distance(x[0],y[0],x[2],y[2]);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return(area);
}

int point_location(float*x,float*y,float a, float b)
{
    float parea[3], pdistances[3], darea = 0;
    int i,k=0;
    for(i=0; i<3;i++)
    {
        swap(&x[i],&a);
        swap(&y[i],&b);
        parea[i] = farea(x,y);
        swap(&x[i],&a);
        swap(&y[i],&b);
    }
    if((farea(x,y)-(parea[0]+parea[1]+parea[2]))<0.0001)
        return(1);
    else
        return(0);
}

void swap(float *m, float*n)
{
    float t;
    t = *m;
    *m = *n;
    *n = t;
}