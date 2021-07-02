#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int extract_num(char);
int binary_to_dcimal(char*);
int oct_to_dcimal(char*);
int hex_to_decimal(char*);

char* decimal_to_bin(int);
char* decmal_to_oct(int);
char* decimal_to_hex(int);


int main()
{
    int op,decimal,i=0;
    char *result;
    printf("Enter a number in number system:\n\t1)Binary\n\t2)Ocatl\n\t3)Hex\n\t4)decimal\n\t");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        char bin[100];
        do
        {
            bin[i]=getchar();
            i++;
        }while(bin[i-1] != '\n');

        bin[i-1] = '\0';
        decimal = binary_to_dcimal(bin);
        break;
    
    case 2:
        char oct[100];
        do
        {
            oct[i]=getchar();
            i++;
        }while(oct[i-1] != '\n');

        oct[i-1] = '\0';
        decimal = oct_to_dcimal(oct);
        break;
    case 3:
        char hex[100];
        do
        {
            hex[i]=getchar();
            i++;
        }while(hex[i-1] != '\n');

        hex[i-1] = '\0';
        decimal = hex_to_dcimal(hex);
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

int binary_to_dcimal(char bin[])
{
    int decimal=0, len = strlen(bin);
    for(int i=0;i<len;i++)
        decimal += extract_num(bin[len-i-1]) * pow(2,len-i-1);
    return(decimal);
}

int oct_to_dcimal(char oct[])
{
    int decimal = 0, len = strlen(oct);
    for(int i=0; i<len;i++)
        decimal += extract_num(oct[len-i-1]) * pow(8,len-i-1);
    return(decimal);
}

int hex_to_dcimal(char hex[])
{
    int decimal = 0, len = strlen(hex);
    for(int i=0; i<len;i++)
        decimal += extract_num(hex[len-i-1]) * pow(8,len-i-1);
    return(decimal);
}

char* decimal_to_bin(int decimal)
{
    char result[100];
    int temp = decimal;
    do
    {
        sprintf(result,"%d",temp/2);
    }while(temp/2 != 0);
    strrev(result);
    return(result);
}

char* decmal_to_oct(int decimal)
{
    char result[100];
    int temp = decimal;
    do
    {
        sprintf(result,"%d",temp/8);
    }while(temp/2 != 0);
    strrev(result);
    return(result);
}

char* decimal_to_hex(int decimal)
{
    char result[100];
    int temp = decimal, i=0;
    do
    {
        
        sprintf(result,"%d",temp/16);
        
        i++;
    }while(temp/2 != 0);
    strrev(result);
    return(result);
}