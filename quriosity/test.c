#include<stdio.h>
#include<string.h>
void name_to_code();
void code_to_name();
void main()
{
    name_to_code();
}
void name_to_code()
{
    char name[25],code[100],*p,l,lc[3];int i,j,k,m;
    printf("Enter the name(only in small letters, no spaces allowed): ");
    gets(name);
    j=strlen(name);
    k=0;
    p=code;
    for(i=0;i<j;i++)
    {
        p=p+k;
        l=name[i];
        sprintf(lc,"%d",l);
        printf("%c = %s\n",l,lc);//this statement was just to check if it works.
        sscanf(lc,"%d",m);
        sprintf(p,"%d",m);
        k=strlen(lc);
    }
    puts(code);
}