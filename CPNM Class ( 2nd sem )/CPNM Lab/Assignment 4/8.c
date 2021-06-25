#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int squre_sum_of_digits(int);

int main()
{
    int t=1, happynumbers=0, num=1;
    while(happynumbers<10)
    {
        int i=0;
        do
        {
            t = squre_sum_of_digits(t);
            if(t==1)
            {
                happynumbers++;
                printf("%d\n",num);
                break;
            }
            i++;
        }while(squre_sum_of_digits(num) != 1 && i<100);
        num++;
        t=num;
    } 
    
    return 0;
}

int squre_sum_of_digits(int num)
{
    int number_of_digits,i,*digits,tnum,sum,sum_of_square=0,t;
    
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
        sum_of_square = sum_of_square + (digits[i]*digits[i]);
    return(sum_of_square);
}