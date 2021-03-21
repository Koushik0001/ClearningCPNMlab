#include<stdio.h>
void xstrcat(char*,char*);
int main()
{
    char target[50],source[25];
    printf("Enter targer string: ");
    gets(target);
    printf("Emter source string: ");
    gets(source);
    xstrcat(target,source);
    printf("%s",target);
}
void xstrcat(char*t,char*s)
{
    int i;
    while(*t != '\0')
    {
        t++;
    }
    while(*s != '\0')
    {
        *t = *s;
        t++; s++;
    }
    *t='\0';

}