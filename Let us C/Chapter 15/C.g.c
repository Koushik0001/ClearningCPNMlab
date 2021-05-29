#include<stdio.h>
#include<string.h>

int main()
{
    char cardn[17];
    int str[16], i=0;
    printf("Enter the card number (Only numerical digits, no space):");
    //printf("\n\n");
    gets(cardn);
    while(cardn[i] != '\0')
    {
        int j= cardn[i];
        int l=0;
        for(int k=48; k<j;k++)
            l++;
        str[i]=l;
        i++;
    }
    /*for(i=0;i<16;i++)//check
    {
        printf("%d",str[i]);
    }
    printf("\n");*/

    for(i=0;i<16;i+=2)
        str[i]*=2;

    /*for(i=0;i<16;i++)//check
    {
        printf("%d\t",str[i]);
    }
    printf("\n");*/

    for(i=0;i<16;i++)
    {
        if(str[i]>=10)
            str[i]-=9;
    }

    /*for(i=0;i<16;i++)//check
    {
        printf("%d",str[i]);
    }
    printf("\n");*/

    int sum=0;
    for(i=0;i<16;i++)
        sum += str[i];
    
   // printf("%d",sum);//check

    if(sum%10 == 0)
        printf("The Credit curd no. is valid.");
    else
        printf("INVALID CREDIT CARD");

    return 0;
}