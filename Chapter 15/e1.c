#include<stdio.h>
void ext(char *,char*,int,int);
void main()
{
    char str[50],estr[50]; int exp,lte;
    printf("enter the string: ");
    gets(str);
    printf("enter starting position of extraction: ");
    scanf("%d",&exp);
    printf("enter no. of letters to be extracted: ");
    scanf("%d",&lte);
    ext(str,estr,exp,lte);
    puts(estr);
}
void ext(char *s,char *es,int exp, int lte )
{
    int i;
    for(i=1;i<exp;i++)
        s++;
    if(lte>0)
    {
        for(i=0;i<lte;i++)
        {
            *es = *s;
            es++; s++;
        }
        *es = '\0';
    }    
    else
    {
       i=0;
       while(*s != '\0')
       {
           *es = *s;
            es++; s++;
       } 
       *es='\0';
    }
    
}