#include<stdio.h>
int main()
{
char character;int ASCIIc ;
printf("What is the character?");
scanf("%c",&character);
ASCIIc = character;
if(ASCIIc<=90 && ASCIIc>=65)
    printf("The character is an upper case letter.");
else if((ASCIIc>=97)&&(ASCIIc<=122))
    printf("The character is a lower case letter.");
else if((ASCIIc<=57)&&(ASCIIc>=48))
    printf("The character is a digit.");
else if( ((ASCIIc>0)&&(ASCIIc<=47))   ||    ((58<=ASCIIc)&&(ASCIIc<=64))  ||     ((91<=ASCIIc)&&(ASCIIc=96))   ||  ((123<=ASCIIc)&&(ASCIIc<=123)))
    printf("The character is a special symbol.");
return 0;
}    