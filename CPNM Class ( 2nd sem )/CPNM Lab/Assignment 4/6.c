/*6. Write a menu driven program to accept a number in any Number System [from Binary, Decimal,
Octal, and Hex] and convert and display the same in any other amongst these.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int to_decimal(char*,int);

char* decimal_to(int,int);
char* decimal_to_hex(int);


int main()
{
    int op,decimal,i=0,base;
    char *result1,*result2,*result3,*result4, nsystem[100];
    printf("Enter in which number system you want enter number:\n\t1)Binary\n\t2)Ocatl\n\t3)Hex\n\t4)decimal\n\t");
    printf("Enter Option No.: ");
    fflush(stdin);
    scanf("%d",&op);

    printf("Enter the number (intigers only) : ");
    fflush(stdin);

    switch (op)
    {
    case 1:
        base = 2;
        break;
    case 2:
        base = 8;
        break;
    case 3:
        base = 16;
        break;
    }

    switch (op)
    {
        case 1:
        case 2:
        case 3:
            do
            {
                nsystem[i]=getchar();
                i++;
            }while(nsystem[i-1] != '\n');

            nsystem[i-1] = '\0';
            decimal = to_decimal(nsystem,base);
            break;
        
        case 4:
            scanf("%d",&decimal);
            break;
    }

    result1 = decimal_to(decimal,2);
    printf("Binary : ");
    puts(result1);

    result2 = decimal_to_hex(decimal);
    printf("hex : ");
    puts(result2);

    result3 = decimal_to(decimal,8);
    printf("Oct : ");
    puts(result3);

    printf("Decimal : %d",decimal);
    return 0;
}

int to_decimal(char nsystem[],int base)
{
    int decimal=0, len = strlen(nsystem);
    for(int i=0;i<len;i++)
        decimal += ((int)(nsystem[i]) * pow(base,len-i-1));
    return(decimal);
}

char *decimal_to(int decimal,int result_base)
{
    static char result[100];
    int temp = decimal,i=0;
    while(temp != 0)
    {
        result[i] = (char)((temp%result_base)+48);
        temp = temp/result_base;
        i++;
    }
    result[i]='\0';
    strrev(result);
    return result;
}

char *decimal_to_hex(int decimal)
{
    static char result[100];
    int temp = decimal, i=0;
    while(temp != 0)
    {
        if(temp%16 <10)
            result[i] = (char)((temp%16)+48);
        else
            result[i] = (char)((temp%16)-10+65);
        temp = temp/16;
        i++;
    }
    result[i]='\0';
    strrev(result);
    return result;
}