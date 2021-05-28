#include<stdio.h>
char leaponf(int);   //This function finds wheather an year is a leap year.
int dayconsf(int,int);   /*This function ditermines the number of dayes consumed of a year
                     day and are given assuming that the year is not leap year. */
int main()
{
int day, month, year;
int numberd; /*numberd= total number of days (including 01/01/01) upto input date and 
              including input date.*/
printf("input day_month_year\n");
scanf("%d%d%d",&day,&month,&year);
char yd=leaponf(year);
int daycons=dayconsf(day,month);
if(yd=='n')
{
    if(year<4)
        numberd = daycons + ((year - 1) * 365);
    else if((4<year)&&(year<100))
        numberd=((year-(year%4))/4)+daycons+((year-1)*365);
    else if((100<=year)&&(year<400))
        numberd=((year-(year%4))/4)+daycons+((year-1)*365)-((year-(year%100))/100);
    else if(400<year)
        numberd=((year-(year%4))/4)+daycons+((year-1)*365)-((year-(year%100))/100)+((year-(year%400))/400);
}
else if(yd=='y')  
{    if((4<=year)&&(year<100))
        {   
            if(month>2)
                numberd=(year/4)+daycons+((year-1)*365);
            else if(((month==2)&&(day<=29))||(month<2))
                numberd=(year/4)+daycons+((year-1)*365)-1;
        }    
    else if((100<=year)&&(year<400))
        {
            if(month>2)
                numberd=(year/4)+daycons+((year-1)*365)-((year-(year%100))/100);
             else if(((month==2)&&(day<=29))||(month<2))
               numberd=(year/4)+daycons+((year-1)*365)-((year-(year%100))/100)-1;
        }
    else if(400<=year)
        {
            if(month>2)
                numberd=(year/4)+daycons+((year-1)*365)-((year-(year%100))/100)+((year-(year%400))/400);
            else if(((month==2)&&(day<=29))||(month<2))
                numberd=(year/4)+daycons+((year-1)*365)-((year-(year%100))/100)+((year-(year%400))/400)-1;
        }
}
int determiner = numberd%7;
if(((day<=31)&&(month==1,3,5,7,8,10,12))||((day<=29)&&(month==2))||((day<=30)&&(month==4,6,9,11)))
{
    switch (determiner)
    {
        case 0:
            printf("SUNDAY\n");
            break;
        case 1:
            printf("MONDAY\n");
            break;
        case 2:
            printf("TUESDAY\n");
            break;
        case 3:
            printf("WEDNESDAY\n");
            break;
        case 4:
            printf("THURSDAY\n");
            break;
        case 5:
            printf("FRIDAY\n");
            break;
        case 6:
            printf("SATURDAY\n");
            break;
    }
}
else
{
    printf ("INVALID ENTRY");
}
printf("The year is a leap year=%c\n",yd);
return 0;
}


char leaponf(int year)
{
    if(((year%4)==0)&&((year%100)!=0))
        return ('y');
    else if(((year%400)==0)&&((year%100)==0))
        return ('y');
    else
        return('n');
}


int dayconsf(int day, int month)
{
int d =0;
if (((month==2)&&(day<=28))||(month==1,3,4,5,6,7,8,9,10,11,12))
    {    switch(month)
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
    }
else if((month==2)&&(day==29))
    d=d+29+31;
return(d);
}
