#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char **p,n[50]; int i,str,j,len;
    printf("How many strings you want to enter: ");
    scanf("%d",&str);
    p=(char**)malloc(str*sizeof(char*));
    for(i=0;i<str;i++)
    {
        printf("Enter the %d th string: ",i+1);
        fflush(stdin);
        gets(n);
        len=strlen(n);
        p[i]=(char *)malloc(len+1);
        strcpy(p[i],n);
    }
    for(i=0;i<str;i++)
        strrev(p[i]);
    if((str%2)==0)
    {
        for(i=0,j=str-1;i<(str/2);i++,j--)
        {
            strcpy(n,p[i]);
            strcpy(p[i],p[j]);
            strcpy(p[j],n);
        }
    }
    else
    {
        for(i=0,j=str-1;i<((str-1)/2);i++,j--)
        {
            strcpy(n,p[i]);
            strcpy(p[i],p[j]);
            strcpy(p[j],n);
        }
    }
    for(i=0;i<str;i++)
        puts(p[i]);
}