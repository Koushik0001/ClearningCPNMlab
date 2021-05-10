#include<stdio.h>
float xstrcmp(char*,char*);
int main()
{
    char a[25],b[25];float ascii;
    printf("Enter string a[25]: ");
    gets(a);
    printf("Enter string b[25]: ");
    gets(b);
    ascii=xstrcmp(a,b);
    printf("ascii difference = %f\n",ascii);
    if(ascii != 0)
        printf("Not same");
    else
        printf("same");
    return 0;
}
float xstrcmp(char*a,char*b)
{
    int i;
    float ascii;
    for(i=0;i<25;i++)
    {
        ascii=*a - *b;
        if(ascii != 0)
            break;
        a++;
        b++;
    }
    return (ascii);

}
