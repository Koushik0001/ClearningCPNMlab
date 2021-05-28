#include<stdio.h>
int main()
{
    int stud[4][2];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter the roll no. and marks.");
        scanf("%d %d",&stud[i][0],&stud[i][1]);
    }
    for(i=0;i<4;i++)
    {
        printf("the rollno of the %d student student is %d and marks is %d",i,stud[i][0],stud[i][1]);
        printf("\n");
    }
    return 0;
}