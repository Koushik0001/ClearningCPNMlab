#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main()
{
    int ans, num;
    printf("                  Finding The Factorial.\n");
    printf("What is the number?\n");
    scanf("%d",&num);
    ans=fact(num);
    printf("                   %d!=%d",num,ans);
    return 0;
}
int fact(int pronum)
{
    int rm, spronum;
    if(pronum==1)
        return(pronum);
    else if(pronum>1)
    {
        rm=pronum*(pronum-1);
        spronum=(pronum-1);
        for(spronum=pronum-1;spronum>1;spronum--)
            rm=rm*(spronum-1);
        return(rm);
    }
     else
    {
        printf("                  UNDIFINED");
        exit(1);   
    }
}