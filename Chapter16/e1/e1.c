#include<stdio.h>
#include<string.h>
void main()
{
    int i,j=0,k=0,len,num=0;
    char *p;
    char str1[30] ,*str[]=  {
                                "we will teach you how to...",
                                "move a mountain",
                                "level a buildng",
                                "lrase the past",
                                "make a million",
                                "...all through C!"
                            };
    printf("Enter the string: ");
    gets(str1);
    len=strlen(str1);
    printf("length= %d\n",len);
    for(i=0;i<6;i++)
    {
        p= str[i];
        while(*p != '\0')
        {
            if(str1[j] == str[i][k])
            {
                j++;
                k++;
                p++;
                if(j==len)
                {
                    num++;
                }
            }
            else
            {
                k++;
                p++;
                j=0;
            }
            
        }
        k=0;
    }
    printf("The entered string is present %d times.",num);
}