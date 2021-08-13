/* 10. Write a program to count the number of occurrences of any two vowels in succession in a line of 
text.*/

#include<stdio.h>
int paired_vowels(char* str)
{
    int i= 0, num=0;
    while (str[i] != '\0')
    {
        if(str[i] == 'a'||str[i]=='e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
        {
            if(str[i+1] == 'a'||str[i+1] == 'e'||str[i+1] == 'i'||str[i+1] == 'o'||str[i+1] == 'u'||str[i+1] == 'A'||str[i+1] == 'E'||str[i+1] == 'I'||str[i+1] == 'O'||str[i+1] == 'U')
                num++;
        }
        i++;
    }
    return(num);
}
int main()
{
    char str[200], i=0;
    int pairedvowels;
    printf("\n\nEnter the string: \n\t");
    do
    {
        str[i] = getchar();
        i++;
    } while (str[i-1] != '\n');
    str[i-1] = '\0';
    pairedvowels = paired_vowels(str);
    printf("The number of occurrences of any two vowels in succession in the line is : %d",pairedvowels);
    return 0;
}