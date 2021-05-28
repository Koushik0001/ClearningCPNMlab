/*This is a program to print the ASCII values and their respective
 characters.*/
#include<stdio.h>
int main(){
int count;
count=0;
while(count<=255)
{
    printf("%d=%c\n",count,count);
    count= count+1;
}
return 0;
}