#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char **p,*str,temp[50];
    int i,j,nn,ns=0,len;

    printf("Enater how many names you want to enter: ");
    scanf("%d",&nn);

    p=(char**)malloc(nn*(sizeof(char*)));

    for(i=0;i<nn;i++)
    {
        printf("Enter the %d th name :",i+1);
        fflush(stdin);
        gets(temp);
        len = strlen(temp);
        p[i]=(char *)malloc(len+1);
        strcpy(p[i],temp);
    }

    free(temp);

    for(i=0;i<nn;i++)
    {
        str=p[i];
        l=0;
        ns=0;
        while(*str!='\0')
        {
            if(*str==' ')
            {
                ns++;
                str++;
                l++;
            }
            else
                str++;
            if(ns==1)
            {
                int k=0;
                j=l;
                char t[40];
                while(p[i][j] !='\0')
                {
                    p[]
                }
            }
        }
    }
    for(i=0;i<nn;i++)
    {
        puts(p[i]);
    }
    
    return 0;
}