#include<stdio.h>

int main()
{
    int num;
    printf("Enter the three digit intiger : ");
    scanf("%d",&num);

    int sum = (num-num%100)/100  +  (num%100-num%10)/10  +  num%10;
    
    printf("The sum of the digits of the digits of the number is : %d",sum);

    return 0;
}