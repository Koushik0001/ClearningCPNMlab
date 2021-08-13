/* 23. Write a program to find the octal equivalent of the entered integer.*/
#include<stdio.h>
#include<string.h>

char *decimal_to(int decimal)
{
    static char result[100];
    int t=decimal,i=0;
    while(t != 0 )
    {
        result[i] = (char)((t % 8)+48);
        t = t/8;
        i++;
    }
    result[i]='\0';
    strrev(result);
    return result;
}

int main()
{
    int num;
    char *result;
    printf("Enter the decimal integer : ");
    scanf("%d",&num);
    result = decimal_to(num);
    printf("octal = %s",result);
    return 0;
}