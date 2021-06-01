#include<stdio.h>
#include<string.h>
void main()
{
    char sent[100],*p;  int i,j,k=0, match;
    printf("Enter the sentence: \n");
    gets(sent);
    i=0;
    p=sent;
    while(*p != '\0')
    {
        char t[]="the ";
        if(sent[i] == t[k])
        {
            i++;
            k++;
            p++;
        }
        else
        {
            k=0;
            p++;
            i++;
        }
        if(k == 3)
        {
            k=0;
            j=i-4;
            while(sent[j+4] != '\0')
            {
                sent[j]=sent[j+4];
                j++;
            }
            sent[j]='\0';
        }
    }
    puts(sent);
}