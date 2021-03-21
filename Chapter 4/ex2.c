/* This program gives the ASCII values of characters (it treats all the numbers,
all the lower and upper case alphabates, spacial charactares as characters only)*/
#include<stdio.h>
int main()
{
char character;
printf("What is the character?");
scanf("%c",&character);
printf("the value of character is:%d\n",character);
return 0;
}