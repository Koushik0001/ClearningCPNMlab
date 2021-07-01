#include<stdio.h>
int getint();
int main()
{
    int num[5], k;
    
    for(int i=0; i<5; i++)
    {
        printf("Enter the numbers of student%d:\n\t",i+1);
        num[i]=0;
        for(int j=0 ; j<5; j++)
            num[i] += getint();
    }

    for(int i=0; i<5; i++)
        printf("The total number obtaimed by student%d = %d \n",i+1,num[i]);

    int x = num[0];
    for(int i=0; i<5; i++)
    {
        if(x<num[i])
        {
            x=num[i];
            k=i;
            continue;
        }
    }
    printf("\nThe highest total marks is %d and was obtained by student%d",x,k+1);
    return 0;
}

int getint()
{
    int num;
    scanf("%d",&num);
    return(num);
}