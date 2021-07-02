#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int extract_num(char);
int binary_to_decimal(char*);
int oct_to_decimal(char*);
int hex_to_decimal(char*);

char extract_char(int);
char* decimal_to_bin(int);
char* decimal_to_oct(int);
char* decimal_to_hex(int);


int main()
{
    int op,decimal,i=0;
    char *result, bin[100],oct[100],hex[100];
    printf("Enter a number in number system:\n\t1)Binary\n\t2)Ocatl\n\t3)Hex\n\t4)decimal\n\t");
    fflush(stdin);
    scanf("%d",&op);
    fflush(stdin);
    switch (op)
    {
        case 1:
            do
            {
                bin[i]=getchar();
                i++;
            }while(bin[i-1] != '\n');

            bin[i-1] = '\0';
            decimal = binary_to_decimal(bin);
            break;
        
        case 2:
            do
            {
                oct[i]=getchar();
                i++;
            }while(oct[i-1] != '\n');

            oct[i-1] = '\0';
            decimal = oct_to_decimal(oct);
            break;
        case 3:
            do
            {
                hex[i]=getchar();
                i++;
            }while(hex[i-1] != '\n');

            hex[i-1] = '\0';
            decimal = hex_to_decimal(hex);
            break;
        case 4:
            scanf("%d",&decimal);
            break;
    }

    printf("In which number system you want to convert:\n\t1)Binary\n\t2)Ocatl\n\t3)Hex\n\t4)decimal\n\t");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        result = decimal_to_bin(decimal);
        break;
    
    case 2:
        result = decimal_to_hex(decimal);
        break;
    case 3:
        result = decimal_to_oct(decimal);
        break;
    case 4:
        printf("%d",decimal);
        break;
    }
    if(op != 4)
        puts(result);

    return 0;
}

int binary_to_decimal(char bin[])
{
    int decimal=0, len = strlen(bin);
    for(int i=0;i<len;i++)
        decimal += (extract_num(bin[i]) * pow(2,len-i-1));
    return(decimal);
}

int oct_to_decimal(char oct[])
{
    int decimal = 0, len = strlen(oct);
    for(int i=0; i<len;i++)
        decimal += extract_num(oct[i]) * pow(8,len-i-1);
    return(decimal);
}

int hex_to_decimal(char hex[])
{
    int decimal = 0, len = strlen(hex);
    for(int i=0; i<len;i++)
        decimal += extract_num(hex[i]) * pow(16,len-i-1);
    return(decimal);
}

char *decimal_to_bin(int decimal)
{
    static char result[100];
    int temp = decimal,i=0;
    while(temp != 0)
    {
        result[i] = extract_char(temp%2);
        temp = temp/2;
        i++;
    }
    result[i]='\0';
    strrev(result);
    return result;
}

char *decimal_to_oct(int decimal)
{
    static char result[100];
    int temp = decimal,i=0;
    while(temp != 0)
    {
        result[i] = extract_char(temp%8);
        temp = temp/8;
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
            result[i] = extract_char(temp%16);
        else
        {
            if(temp%16 == 10)
                result[i] = 'A';
            else if(temp%16 == 11)
                result[i] = 'B';
            else if(temp%16 == 12)
                result[i] = 'C';
            else if(temp%16 == 13)
                result[i] = 'D';
            else if(temp%16 == 14)
                result[i] = 'E';
            else if(temp%16 == 15)
                result[i] = 'F';
        }
        temp = temp/16;
        i++;
    }
    result[i]='\0';
    strrev(result);
    return result;
}

int extract_num(char ch)
{
    if(ch == 'A'||ch == 'B'||ch == 'C'||ch == 'D'|| ch == 'E'||ch == 'F')
    {
        int ans = ch-'A'+10;
        return(ans);
    }
    else
    {
        int ans = ch - '0';
        return(ans);
    }
}

char extract_char(int num)
{
    char ch;
    ch = (char)(num+48);
    return (ch);
}
