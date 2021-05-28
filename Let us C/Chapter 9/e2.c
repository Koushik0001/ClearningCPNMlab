#include<stdio.h>
void avepars(float *,float *);
int main()
{
    float  ave, pers;
    avepars(&ave, &pers);
    printf("avrage=%f\npersentage=%f",ave,pers);
    return 0;
}
void avepars(float *a, float *p)
{
    float s1, s2 ,s3, fs1, fs2, fs3;
    printf("What are the numbers in the subjects.\n");
    scanf("%f %f %f",&s1,&s2,&s3);
    printf("enter Maximum marks in each of the three subjects\n");
    scanf("%f %f %f",&fs1, &fs2, &fs3);
    *a=(s1+s2+s3)/3;
    *p=*a*3*100/(fs1+fs2+fs3);
}
