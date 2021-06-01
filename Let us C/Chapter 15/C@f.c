#include<stdio.h>
#include<string.h>

int main()
{
    char isbn[11];
    int str[10], i=0;
     printf("Enter the ISBN code (X is used to denote 10): ");
     gets(isbn);

    while(isbn[i] != '\0')
    {
        int j = isbn[i];
        int l=0;
        if(j != 88)//ASCII value of 'X' is 88
        {
            for(int k=48;k<j;k++)
                l++;
        }
        else
            l=10;
        str[9-i]=l;
        i++;
    }

    int sum=0; 
    for(i=0;i<10;i++)
        sum += (i+1)*str[i];

    //printf("%d",sum);//check
    
    if(sum%11 == 0)
        printf("VALID");
    else
        printf("INVALID");

    return 0;

}