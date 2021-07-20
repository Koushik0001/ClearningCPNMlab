/*13. Write a C program which accepts number obtained by five students in five subjects. Print the
total marks obtained by all the students. Also determine the highest total marks.*/

#include<stdio.h>

int main()
{
    int num[5][5], total[5], k;
    
    for(int i=0; i<5; i++)
    {
        printf("Enter the numbers of student%d:\n",i+1);
        for(int j=0 ; j<5; j++)
        {
            printf("\tsubject%d : ",j+1);
            scanf("%d",&num[i][j]);
        }
    }

    for(int i=0; i<5; i++)
    {
        total[i] = 0 ;
        for(int j=0; j<5; j++)
            total[i] += num[i][j];
        printf("The total number obtaimed by student%d = %d \n",i+1,total[i]);
    }

    int x = total[0];
    for(int i=0; i<5; i++)
    {
        if(x<total[i])
        {
            x=total[i];
            continue;
        }
    }
    printf("The highest marks is %d\n",x);
    printf("The highest marks is obtained by student : ");
    for(int i=0; i<5; i++)
    {
        if(x == total[i])
            printf("%d  ",i+1);
    }
    return 0;
}