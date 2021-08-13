/* 11. Write a program to generate all combinations of digit 1, 2 and 3 using for loop. [OPTIONAL]*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n, i=0;
    char *character,t[200];
    printf("Enter the characters : ");
    do
    {   
        t[i] = getchar();
        i++;
    } while (t[i-1] != '\n');
    t[i] = '\0';
    character = (char*) malloc(i *sizeof(char));
    strcpy(character,t);
    free(t);
    

    
    return 0;
}