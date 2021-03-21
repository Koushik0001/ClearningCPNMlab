#include<stdio.h>
#include<string.h>
void main()
{
    char rollnumber[25],code[25],*p;
    printf("Emnter roll number: ");
    gets(rollnumber);
    p=code;
    sscanf(rollnumber,"%s@@@@@@@@@",code);
    puts(code);
}