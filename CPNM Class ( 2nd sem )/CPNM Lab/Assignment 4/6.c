/*6. Write a menu driven program to accept a number in any Number System [from Binary, Decimal,
Octal, and Hex] and convert and display the same in any other amongst these.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int to_decimal(char*,int);
char* decimal_to(int,int);
int extract_num(char);


int main()
{
    int op,decimal,i=0,base;
    char *result1,*result2,*result3, nsystem[100],run;

    do
    {
        printf("Enter in which number system you want enter number:\n\t1)decimal\n\t2)Binary\n\t3)Ocatl\n\t4)Hex\n\t");
        printf("Enter Option No.: ");
        fflush(stdin);
        scanf("%d",&op);

        printf("Enter the number (intigers only) : ");
        fflush(stdin);

        switch (op)
        {
            case 2:
                base = 2;
                break;
            case 3:
                base = 8;
                break;
            case 4:
                base = 16;
                break;
        }

        switch (op)
        {
            case 1:
                scanf("%d",&decimal);
                break;
            default:
                do
                {
                    nsystem[i]=getchar();
                    i++;
                }while(nsystem[i-1] != '\n');

                nsystem[i-1] = '\0';
                decimal = to_decimal(nsystem,base);
        }

        result1 = decimal_to(decimal,2);
        printf("Binary : ");
        puts(result1);

        result2 = decimal_to(decimal,8);
        printf("Oct : ");
        puts(result2);

        printf("Decimal : %d",decimal);

        result3 = decimal_to(decimal,16);
        printf("\nhex : ");
        puts(result3);

        printf("\n\nDo you want to enter another humber(y/n) : ");
        run = getchar();
    }while (run = 'y');

    return 0;
}

int to_decimal(char nsystem[],int base)
{
    int decimal=0, len = strlen(nsystem);
    for(int i=0;i<len;i++)
        decimal += (extract_num(nsystem[i]) * pow(base,len-i-1));
    return(decimal);
}

char *decimal_to(int decimal,int result_base)
{
    static char result[100];
    int temp = decimal,i=0;
    while(temp != 0)
    {
         if(temp % result_base <10)
            result[i] = (char)((temp % result_base)+48);
        else
            result[i] = (char)((temp % result_base)-10+65);
        temp = temp/result_base;
        i++;
    }
    result[i]='\0';
    strrev(result);
    return result;
}

int extract_num(char c)
{
    int num;
    if(c < 58 && c > 47)
        num = c - '0';
    else
        num = c - 'A' + 10;
    return(num);
}