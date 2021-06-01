#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char **p,*str,temp[50];
    int i,l,nn,ns=0,len;

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

    for(i=0;i<nn;i++)
    {
        str=p[i];
        l=0;
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

            printf("inside while loop\n");
            int k=1,j=l-1;
            if(ns>0)
            {
                while(str[j] != '\0')
                {
                    str[k]=str[j];
                    k++;
                    j++;
                }
                printf("%d\n",ns);
                str[k]='\0';
                if(ns==1)
                {
                    k=2;
                    str=str-l+2;
                }
                if(ns==2)
                    break;
            }
        }
    }
    for(i=0;i<nn;i++)
    {
        puts(p[i]);
    }
    
    return 0;
}