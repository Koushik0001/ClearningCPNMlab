/*This is a program to find the factorial value of 
any number.But This is valid only upto !12. Because
!13=6,227,020,800 and this is greater than 2,147,483,647
which is the highest value of an intiger constant in GCC.*/


#include<stdio.h>
int main(){
long double num, count;
long double rm;
printf("What is the number?");
scanf("%Lf",&num);
count = num - 2;
rm = num * (num-1);
while(count>1)
{
    rm=rm*count;
    count=count-1;

}
printf("%Lf",rm);
return 0;    
}