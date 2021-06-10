#include<stdio.h>
int main()
{
    FILE *fp;char ch;
    fp=fopen("C:\\Users\\Dell\\Desktop\\Codding\\C Learning\\Let us C\\Chapter 19\\example1.c","r");
    ch = fgetc(fp);
    while (1) 
    {
        ch = fgetc(fp);    
        if (ch == EOF)
            break;
        putchar(ch);
    }
}
