/* 5. Write a C program which accepts a string from user and counts the number of characters in the 
string without using string library functions.*/

#include<stdio.h>
int fstrlen(char* str)
{
    int num = 0,i=0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
            num++;
        i++;
    }
    return(num);
}
int main()
{
    char str[200], i=0;
    int numofchar;
    printf("\n\nEnter the string: \n\t");
    do
    {
        str[i] = getchar();
        i++;
    } while (str[i-1] != '\n');
    str[i-1] = '\0';
    numofchar = fstrlen(str);
    printf("The number of characters in the string entered is %d\n\n",numofchar);
    return 0;
}