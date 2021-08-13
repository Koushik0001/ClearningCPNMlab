#include<stdio.h>

int main()
{
    int x,facto=1;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
        facto = facto * i;
    printf("facto = %d",facto);
    return 0;
}