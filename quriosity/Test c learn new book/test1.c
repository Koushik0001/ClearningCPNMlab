#include<stdio.h>

int main()
{
    int c;
    c= getchar();
    putchar(c);

    scanf("%d",&c);
    printf("%c",c);
    printf("\n%d\n",'~');

    for(int i=0;i<=131;i++)
        printf("%d = %c\n",i,i);
    return 0;
}