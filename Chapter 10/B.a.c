#include<stdio.h>
#include<math.h>
int rec(int,int);
int main()
{
    int n, sum, t, nd, i=0;
    char s='n';
    printf("Enter the five digit number: ");
    scanf("%d",&n);
    do
    {   
        i++;
        t=pow(10,i);
        if(n<t)
            s='y';
    } while (s=='n');
    nd = i;
    printf("%d\n",nd);
    sum = rec(n,nd);
    printf("sum of the numbers is %d\n",sum);
    return 0;
}
int rec(int a,int nd)
{
    int t,t2,t3,sum;
    if(nd != 1)
    {
        t2=pow(10,(nd-1));
        t3=a%t2;
        sum=(a-t3)/t2+rec(t3,nd-1);
        return(sum);
    }
    else
        return(a);
}