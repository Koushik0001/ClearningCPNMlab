#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int ub,number_of_digits,i,*digits,num,tnum,t,sum_of_qube=0;
    printf("Enter the upper limit: ");
    scanf("%d",&ub);

    
    for(num=ub;num>0;num--)
    {
        for(number_of_digits=0;num>=pow(10,number_of_digits);number_of_digits++)
        ; 
        //printf("number of digits = %d\n",number_of_digits);
        digits = (int*)malloc(number_of_digits*sizeof(int));
        tnum = num;
        t = number_of_digits-1;

        for(i=0;i<number_of_digits;i++)
        {
            digits[i] = tnum/pow(10,t);
            tnum = tnum - (digits[i] * pow(10,t));
            t--; 
        }

        /*for (i=0;i<number_of_digits; i++)
            printf("%d\t",digits[i]);
        printf("\n\n");*/

        for(i=0;i<number_of_digits;i++)
            sum_of_qube = sum_of_qube + (digits[i]*digits[i]*digits[i]);
        if (sum_of_qube == num)
            printf("%d\n",num);
        sum_of_qube=0;
        free(digits);
    }
    return 0;
}