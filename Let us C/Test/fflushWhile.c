#include<stdio.h>

int main()
{
    char zp;   
    while((zp = getchar()) != '\n');
    printf("%c",zp);
    
    return 0;
}