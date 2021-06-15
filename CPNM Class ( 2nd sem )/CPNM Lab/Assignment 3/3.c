#include<stdio.h>

int find_highest_common_factor(int,int);
int main()
{
    int num1, num2, hcf;
    
    printf("\n\n\nEnter two intiger numbers : ");
    scanf("%d%d",&num1,&num2);

    hcf = find_highest_common_factor(num1,num2);
    float x; 
    if (num1<num2)
    {
        x = num2/num1;
        printf("Output : %d/%d = %d\n\n\n",num2/hcf,num1/hcf,num2/num1);
    }
    else
    {
        x = num1/num2;
        printf("Output : %d/%d = %d\n\n\n",num1/hcf,num2/hcf,num1/num2);
    }
    return 0;
}

int find_highest_common_factor(int num1, int num2 )
{
    int i, j=0, t1, t2, hcf=1;
    if (num1<num2)
    {
        t1 = num1;
        t2 = num2;
    }
    else
    {
        t1 = num2;
        t2 = num1;
    }
    int t = t1;
    
    for (i=2;i<=t; i++)
    {
        while(t1%i==0 && t2%i==0) 
        {
            hcf = hcf*i;
            t1 = t1/i;
            t2 = t2/i; 
        }
    }
    return (hcf);
}