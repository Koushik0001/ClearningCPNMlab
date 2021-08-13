/* 12. Write a program that converts a string like “123” to integer 123. Do not use any string library 
function*/

#include<stdio.h>
#include<math.h>
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
int str_to_int(char *str)
{
    int i=0, len = fstrlen(str), num=0;
    while (str[i] != '\0')
    {
        num += (str[i] - '0')*pow(10,(len - 1 - i));
        i++;
    }
    return(num);
}
int main()
{
    char str[200], i=0;
    int integer;
    printf("\n\nEnter the string: \n\t");
    do
    {
        str[i] = getchar();
        i++;
    } while (str[i-1] != '\n');
    str[i-1] = '\0';
    integer = str_to_int(str);
    printf("The integer is : %d\n\n",integer);
    return 0;
}