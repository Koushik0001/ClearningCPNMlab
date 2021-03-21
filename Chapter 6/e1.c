/*This program prints all the number from 1 to 300 and tells wheather
 they are prime or not.*/
#include<stdio.h>
int main(){
int num, t;
for(num=1;num<=300;num++)
{
    for(t=2;t<=num-1;t++)
        if(num%t==0)
        {    printf("The number %d is not prime.\n",num);
             break;
        }     
    if(t==num)
        printf("The number %d is prime.\n",num);
}
return 0;
}