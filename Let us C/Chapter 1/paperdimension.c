#include<stdio.h>
void function(int,int*,int*);
int main()
{
    int spec,*l1,*l2;
    printf("Enter specification: ");
    scanf("%d",&spec);
    function(spec,l1,l2);
    printf("returned successfully");
    printf("%d, %d",*l1, *l2);
    return 0;
}
void function(int spec,int *l1,int *l2)
{

    if (spec==0)
    {
        printf("%d",spec);
        *l1=1189; *l2=841;
        printf("%d",*l1);
    }
    else 
    {
        if(*l1 >*l2)
            *l1=*l1/2 ;
        else
            *l2=*l2/2;
        function(spec-1,l1,l2);
    }
}
