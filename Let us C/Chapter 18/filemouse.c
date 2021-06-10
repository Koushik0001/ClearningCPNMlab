#include<stdio.h>
#include<string.h>
#include<math.h>

float getint();

int main()
{
    printf("enter the numeric string : ");
    float n = getint();
    printf("you entered = %f",n);
    return 0;
}

float getint()
{
    float number=0.00;
    int point=0;
    char str[12];
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        point = str[i];
        if(point==46)
        {
            point=i;
            break;
        }
    }
    for(int i= 0; i<len; i++)
    {
        if (i < point)
            number += (str[i]-'0') * pow(10 , point-i-1);
        else if (i == point)
            ;
        else      
            number += (str[i]-'0') * pow(10 , point-i);
    }
    return(number);
}