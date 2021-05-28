#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char **p ,temp[50]; int nn,len,l,i;
void comp();
int main()
{
    int k;
    printf("Enter the number of names: ");
    scanf("%d",&nn);
    p=(char**)malloc(nn*sizeof(char*));
    for(k=0;k<nn;k++)
    {
        printf("Enter %d th name: ",k+1);
        fflush(stdin);
        gets(temp);
        len=strlen(temp);
        p[k]=(char*)malloc(len+1);
        strcpy(p[k],temp);
    }
    for(k=1;k<nn;k++)
    {
       for(l=0;l<nn;l++)
       {
           i=strcmp(p[k],p[l]);
           if(i<0)
           {
               strcpy(temp,p[k]);
               strcpy(p[k],p[l]);
               strcpy(p[l],temp);
           }
       }
    }
    for(k=1;k<nn;k++)
    {
        puts(p[k]);
    }
    return 0;
}