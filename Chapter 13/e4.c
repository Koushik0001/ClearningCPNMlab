#include<stdio.h>
#include <stdlib.h>
int main()
{
    float *p; int i,n,max;
    printf("Enter array dimension:  ");
    scanf("%d",&max);
    n=max;
    p = (float*) malloc(max*sizeof(float));
    for(i=0;i<max;i++)
    {
        printf("enter %d th number:  ",i);
        scanf("%f",&p[i]);
    }
    if(max%2==0)
    {    
        for(i=0;i<(max/2);i++)
        {
            if(p[i]-p[n-1]==0)
               printf("element %d= element %d\n",i,n-1);
            else
                printf("element %d =! element %d\n",i,n-1);
            n--;
        }
    }
    else
    {
        for(i=0;i<((max-1)/2);i++)
        {
            if(p[i]-p[n-1]==0)
               printf("element %d= element %d\n",i,n-1);
            else
                printf("element %d =! element %d\n",i,n-1);
            n--;
        }
    }
    
    return 0;
}