#include<stdio.h>

int main()
{
   FILE *fp;
   char ch;
   int newline=0,tab=0,spaces=0,characters=0;
   fp=fopen("D@b.c","r");
   while (1)
   {
        ch = fgetc(fp);
        characters++;
        if(ch=='\n')
            newline++;
        if (ch=='\t')
            tab++;
        if(ch==' ')
            spaces++;
        if(ch == EOF)
            break;
        printf("%c",ch);
   }
   printf("\n");
   fclose(fp);
   printf("characters = %d\nnewlines = %d\ntabs = %d\nspaces = %d ",characters,newline,tab,spaces);
    
    return 0;
}