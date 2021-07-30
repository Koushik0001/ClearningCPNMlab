/* 3. Write a recursive function which returns the sum of individual digits of a number passed as 
argument.*/
#include<stdio.h>
#include<math.h>

int sum_of_digits(int);
int main()
{
    int num, sum;
    printf("Enter the number : ");
    scanf("%d",&num);

    sum = sum_of_digits(num);
    printf("The sum of individual digits of a number is %d ",sum);
    return 0;
}

int sum_of_digits(int num)
{
    if(num<10)
        return(num);
    else
    {
        float t = num;
        int number_of_digits=0, sum;
        while(t >=1)
        {
            t = t/10;
            number_of_digits++;
        }
        int x=pow(10,number_of_digits-1);
        sum = ((num - (num % x))/x) + sum_of_digits(num % x);
        return (sum);
    }
}
