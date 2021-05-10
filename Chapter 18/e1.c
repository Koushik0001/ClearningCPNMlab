#include<stdio.h>
void xgets(char *);
void xputs(char *);
int main()
{
    char n[50];
    printf("Enter the string:");
    xgets(n);
    xputs(n);
    return 0;
}
void xgets(char *p)
{
    p--;
    do
    {
        p++;
        scanf("%c",p);
    }while(*p != '\n');
    *p='\0';
}
void xputs(char *p2)
{
    while (*p2 != '\0')
    {
        printf("%c",*p2);
        p2++;
    }
}