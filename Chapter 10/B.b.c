#include<stdio.h>
void rec(int,int);
int main()
{
    int n,initiation=2;
    printf("Enter the number: ");
    scanf("%d",&n);
    rec(n,initiation);
}
void rec(int n,int i)
{
    int i2=2, t, t3,i3;
    char pt;
    while(i<=n/2)
    {
        while(i2<=(i/2))
        {
            if(i%i2==0)
            {
                i=i+1;
                continue;
            }
            i2++;
        }
        if(n%i==0)
        {
            t=n/i;
            i3=2;
            while(i3<=(i/2))
            {
                if(i%i3==0)
                {
                    pt='n';
                    break;
                }
                i3++;
            }
            if(pt!='n'&& (n%i)==0)
                printf("%d\n",i);
            rec(t,i);
        }
        i=i+1;
    }
}