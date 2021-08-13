/* 13. Write a C program which accepts a string from user and checks whether it is palindrome or not. Do 
not use any string library function. [Example of a palindrome string: "abcba", "abba"]*/


#include<stdio.h>

int fstrlen(char* str)
{
    int num = 0,i=0;
    while(str[i] != '\0')
    {
        num++;
        i++;
    }
    return(num);
}
char* xstrrev(char* str)
{
    int len = fstrlen(str);
    for(int i=0; i<len/2; i++)
    {
        char t;
        t = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = t;
    }
}

int main()
{
    char str[200], i=0,*reversed_str;
    printf("\n\nEnter the string: \n\t");
    do
    {
        str[i] = getchar();
        i++;
    } while (str[i-1] != '\n');
    str[i-1] = '\0';
    reversed_str = xstrrev(str);
    i=0;
    while (str[i] != '\0')
    {
        if(str[i] != reversed_str[i])
            break;
        i++;
    }
    if(i-1 == fstrlen(str))
        printf("The entered is a palindrome string.%d %d\n\n",fstrlen(str),i-1);
    
    return 0;
}