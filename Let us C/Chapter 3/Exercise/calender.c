 #include<stdio.h>
#include<stdlib.h>
char detlepf(int);
int daysconsumedf(char,int,int,int);
void main()
{
    int date,month,year,daysconsumed,df;
    char detlep;
    printf("Enter the year  (DAY MONTH YEAR): ");
    scanf("%d %d %d",&date,&month,&year); printf("\n");
    detlep = detlepf(year);
    if(detlep=='n'&& month==2 && date>28)
        {
            printf("Invalid Entry, Year is not leap year.");
            exit(1);
        }
    daysconsumed = daysconsumedf(detlep,date,month,year);
    df=daysconsumed%7;
    switch(df)
    {
        case 0:
            printf("SUNDAY");
            break;
        case 1:
            printf("MONDAY");
            break;
        case 2:
            printf("TUESDAY");
            break;
        case 3:
            printf("WEDNESDAY");
            break;
        case 4:
            printf("THURSDAY");
            break;
        case 5:
            printf("FRIDAY");
            break;
        case 6:
            printf("SATDAY");
    }
}
char detlepf(int y)
{
    if ((((y%4) == 0) && ((y%100) != 0)) || (((y%100) == 0) && ((y%400) == 0)))
        return('y');
    else
        return('n');
}
int daysconsumedf(char detleap,int day,int month,int year)
{
    int d1, d2 ,d3,nL,daysconsumed;// these are temporarily needed determining factors.nL= number leap years.
    d1=((year-(year%4))/4);   d2=((year-(year%400))/400);   d3=((year-(year%100))/100);
    nL=d1-d3+d2;
    int d=0;
    switch(month)
    {
        case 12:
                d=d+30;
        case 11:
                d=d+31;
        case 10:
                d=d+30;
        case 9:
                d=d+31;
        case 8:
                d=d+31;
        case 7:
                d=d+30;
        case 6:
                d=d+31;
        case 5:
                d=d+30;
        case 4:
                d=d+31;
        case 3:
                d=d+28;                                    
        case 2:
                d=d+31;
        case 1:
                d=d+day;
                break;
    }
    daysconsumed= d + 365*(year-1) +nL;
    if((detleap=='y'&& month<2)||(detleap=='y'&& month==2 && day<29))
        daysconsumed--;
    return(daysconsumed);
} 