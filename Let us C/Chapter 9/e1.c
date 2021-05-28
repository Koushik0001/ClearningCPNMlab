#include<stdio.h>
#include<math.h>
void sas(int*,float*,float*);
void main()
{
    int sum;float ave,sd;
    sas(&sum,&ave,&sd);
    printf("        sum = %d,\n       average = %f,\n       standerd deviation = %f",sum,ave,sd);
}


void sas(int*sum,float*ave,float*sd)
{
    int n1,n2,n3,n4,n5;
    printf("                     Enter five numbers\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *ave=*sum/5;
    *sd=sqrt((pow((n1-*ave),2)+pow((n2-*ave),2)+pow((n3-*ave),2)+pow((n4-*ave),2)+pow((n5-*ave),2))/4);
}