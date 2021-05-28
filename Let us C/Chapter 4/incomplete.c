#include<stdio.h>
int main()
{
char character, ASCIIc ;
printf("What is the character?");
scanf("%c",&character);
ASCIIc = ("%d",character);
if((65<=ASCIIc)&&(ASCIIc>=90))
    printf("The character is an upper case letter.");
else if((97<=ASCIIc)&&(ASCIIc>=122))
    printf("The character is a lower case letter.");
else if((48<=ASCIIc)&&(ASCIIc>=57))
    printf("The character is a digit.");
else if(((0<=ASCIIc)&&(ASCIIc>=47))||((58<=ASCIIc)&&(ASCIIc>=64))||((91<=ASCIIc)&&(ASCIIc>=96))||((123<=ASCIIc)&&(ASCIIc>=123)))
    printf("The character is a special symbol.");
return 0;
}    