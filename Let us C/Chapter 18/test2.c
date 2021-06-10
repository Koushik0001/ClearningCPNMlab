#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fs,*ft;
    char ch;
    fs=fopen("D@c.c","r");
    if(fs == NULL)
    {
        printf("The file could not be opened.");
        exit(1);
    }
    ft = fopen("filemouse.c","w");
    if(ft == NULL)
    {
        printf("The file could not be opened.");
        exit(2);
    }
    while (1)
    {
        ch = fgetc(fs);
        if(ch == EOF)
            break;
        else
            fputc(ch,ft);
    }
    fclose(ft);
    fclose(fs);
    
    return 0;
}