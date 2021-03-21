#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void name_to_code();
//void code_to_name();
void main()
{
    int op;
    printf("What do you want to do?\n\t\t\t1)convert name to code.\n\t\t\t2)Convert code to name.");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        name_to_code();
        break;
    
    //case 2:
        //code_to_name();
        //break;
    default:
        exit(1);
    }
}
void name_to_code()
{
    char n[50];int i,j,k;
    printf("Enter the name(only small letters and no space within tne name): ");
    fflush(stdin);
    gets(n);
    while (n[i] != '\0')
    {
       sscanf(&n[i],"%d",&j);
        k=j;//-96;//ASCII value of 'a' is 97.
        printf("%d\t",k);
        i++;
    }
    
}