#include<stdio.h>
#include<string.h>
#include<math.h>
int getint();
int main()
{
    printf("enter the numeric string : ");
    int n = getint();
    printf("%d",n);
    return 0;
}
int getint()
{
    int number=0;
    char str[12];
    gets(str);
    int len = strlen(str);
    for(int i= 0; i<len; i++)
    {
        int k=0,nn;
        nn = str[i];
        for(int j=48;j<nn;j++)
            k++;
        number += k * pow(10 , len-i-1);
    }
    return(number);
}