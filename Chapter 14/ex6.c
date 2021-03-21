#include<stdio.h>
int main()
{
    int *i,*j,*k,*l,m;
    int a=1,b=2,c=3,d=4;
    i=&a;j=&b;k=&c;l=&d;
    int *arr[]={i,j,k,l};
    for(m=0;m<4;m++)
        printf("%u  %d\n",(arr+m),*(*(arr+m)));
    return 0;
}