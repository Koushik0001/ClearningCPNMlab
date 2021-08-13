/* 7. Write a C program which accepts a full name from user prints the initials. Eg. SRT for Sachin 
Ramesh Tendulkar.*/

#include<stdio.h>
char* initials(char* str)
{
    static char init[11];
    int i = 0, j=0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            init[j] = str[i+1];
            i++;
            j++;
        }
        i++;
    }
    init[j] = '\0';
    return(init);
}

int main()
{
    char str[200], i=1, *init;
    str[0] = ' ';
    printf("\n\nEnter the Name: ");
    do
    {
        str[i] = getchar();
        i++;
    } while (str[i-1] != '\n');
    str[i-1] = '\0';
    init = initials(str);
    i=0;
    printf("The initials of the entered name is : ");
    while (init[i] != '\0')
    {
        printf("%c",init[i]);
        i++;
    }
    return 0;
}