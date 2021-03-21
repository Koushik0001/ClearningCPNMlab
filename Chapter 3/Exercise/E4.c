#include<stdio.h>
int main()
{
    int num,r1,r2,r4,r3,r5, d1,d2,d3,d4,d5, rnum;
    printf("Input The Five Digit number.\n");
    scanf("%d",&num);
    r1=num%10000; r2=r1%1000; r3=r2%100; r4=r3%10;
    d1=r4; d2=(r3-r4)/10; d3=(r2-r3)/100; d4=(r1-r2)/1000; d5=(num-r1)/10000;
    rnum=(10000*d1)+(1000*d2)+(100*d3)+(10*d4)+(1*d5);
    printf("The riverse of the five digit number is = %d\n",rnum);
    if((rnum-num)==0)
        printf("The number and its reverse are EQUAL");
    else
        printf("The numbers are NOT EQUAL");
    return 0;
}
    
