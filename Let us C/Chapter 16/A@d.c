#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char **p ,temp[50]; int nn,len,i,j;

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

    for(k=0;k<nn;k++)
    {
        len=strlen(p[k]);
        for(i=0;i<(len/2);i++)
        {
            char t;
            t=p[k][i];
            p[k][i]=p[k][len-i-1];
            p[k][len-i-1]=t;
        }
    }

    for(i=0;i<nn/2;i++)
    {
        char *t;
        t=p[i];
        p[i]=p[nn-i-1];
        p[nn-i-1]=t;
    }

    for(i=0;i<nn;i++)
        puts(p[i]);
    return 0;
}