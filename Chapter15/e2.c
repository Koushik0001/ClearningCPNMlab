#include<stdio.h>
void coni(const char*,int*);//converting function
int main()
{
    char str[5];int ci;//ci=converted to intiger
    printf("Enter the string that needs to be converted to an int: ");
    gets(str);
    coni(str,&ci);
    printf("%d",ci);
    return 0;
}
void coni(const char*s,int*in)
{
   // char *ts;temporary s
    //ts = s;
    char su[]="\0";
    int i,i2,i3,num,nmd,n, ascii,numd=0;  //numd=number of digits, i and i2 are counters.
    while(*s != '\0')
    {
        numd++;
        s++;
    }
    printf("%d\n",numd);
    nmd=numd;
    for(i=1;i<=numd;i++)
    {
        ascii = *s + *su;
        printf("ascii valu of %d digit:%d",i,ascii);
        for(i2=48,num=0;i2<ascii;i2++)
            num++;
        for(i3=0;i3<nmd;i3++)
            num=num*10;
        *in=*in+num;
        s++; nmd--;
    }
}