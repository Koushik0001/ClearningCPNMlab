/* 9. Write a program that reads a line and converts it into all capitals without using any string library 
function. (input string may also contain capital letters)*/

#include<stdio.h>
void to_upper_case(char* str)
{
    int i=0;
    while (str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z' )
            str[i] = (char)('A' + str[i] - 'a');
        i++;
    }
    
}

int main()
{
    char str[200], i=0;
    printf("\n\nEnter the string: \n\t");
    do
    {
        str[i] = getchar();
        i++;
    } while (str[i-1] != '\n');
    str[i-1] = '\0';
    to_upper_case(str);
    i=0;
    printf("The converted string is : \n\t");
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}