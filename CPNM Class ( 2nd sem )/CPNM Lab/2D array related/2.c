#include<stdio.h>
#include<math.h>

struct coordinate
{
    float x,y;
};

float farea(struct coordinate []);
struct coordinate fmiddle_point(struct coordinate, struct coordinate);
float fdistance(struct coordinate, struct coordinate);

int main()
{
    float area;
    struct coordinate vertices[3];
    printf("\n\nEnter the co-ordinates of the vertices of the triangle : \n");
    for(int i= 0; i<3; i++)
    {
        printf("\tEnter the co-ordinates of point%d (x,y): ",i+1);
        scanf("(%f,%f)",&vertices[i].x,&vertices[i].y);
        fflush(stdin);
    }

    area = farea(vertices);
    printf("Area of the triangle with the provided set of vertices = %0.3f ",area);

    struct coordinate p[3];
    printf("\n\nEnter the two points whose middle point is to be found : \n");
    printf("\tEnter point1 (x,y) : ");
    scanf("(%f,%f)",&p[0].x,&p[0].y);
    fflush(stdin);
    printf("\tEnter point2 (x,y) : ");
    scanf("(%f,%f)",&p[1].x,&p[1].y);

    p[2] = fmiddle_point(p[0],p[1]);
    printf("The middle point of the line segment joining the two points is (%0.3f,%0.3f)\n\n",p[2].x,p[2].y);
}

float fdistance(struct coordinate p1, struct coordinate p2)
{
    float distance = sqrt( pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
    return(distance);
}

float farea(struct coordinate vertices[3])
{
    float a,b,c,s, area;
    a = fdistance(vertices[0],vertices[1]);
    b = fdistance(vertices[1],vertices[2]);
    c = fdistance(vertices[0],vertices[2]);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return(area);
}

struct coordinate fmiddle_point(struct coordinate p1, struct coordinate p2)
{
    struct coordinate p3;
    p3.x = (p1.x + p2.x)/2;
    p3.y = (p1.y + p2.y)/2;

    return(p3);
}