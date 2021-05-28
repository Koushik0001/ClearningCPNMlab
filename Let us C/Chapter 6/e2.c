/*This program gives the result of (1/1!)+(2/2!)+(3/3!)...up to seventh tterm*/
#include<stdio.h>
int main(){
int num, count;
float ra, rd, rm;
for(ra=1.0,num=2;num<=7;num++)
        {
            count=num-2;
            rm=num*(num-1);
            for(count=num-2;count>1;count=count-1)
              { rm=rm*count;}
        rd= num/rm;
        ra=ra+rd;   
        }
printf("The result is %f",ra);        
return 0;
}