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
    for(i=0;i<nn;i++)
    {
        for(j=0;j<nn-1;j++)
        {
            k=strcmp(p[j],p[j+1]);
            if(k>0)
            {
                char* t;
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }
    for(k=0;k<nn;k++)
    {
        printf("%8s\n",p[k]);
    }
    return 0;
}