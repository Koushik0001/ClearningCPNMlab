/*8. Write a C program which prints the first 10 happy numbers. If you iterate the process (assume
maximum 100 iterations) of summing the squares of the decimal digits of a number and if the process terminates in 1, then the original number is called a Happy number. For example 7 is a
happy number as 7 → 49 → 97 → 130 → 10 → 1.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int squre_sum_of_digits(int);

int main()
{
    int t=1, happynumbers=0, num=1;
    printf("First 10 happy numbers are : \n");
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