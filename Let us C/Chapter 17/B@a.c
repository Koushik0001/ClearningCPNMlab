#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char rolln[25], name[25], dpt[25],course[25],yearojo[5];
}s[450];
void batch(struct student s[],int);
void stuinfo(struct student s[],int);
void main()
{
    char run;
    struct student s[450];
    int ne,i,op;
    printf("Enter the number of entries: \n");
    scanf("%d",&ne);
    for(i=0;i<ne;i++)
    {
        printf("Enter the details of stdent %d\n",i+1);
        printf("NAME: ");
        fflush(stdin);
        gets(s[i].name);
        printf("ROLL NO. ");
        fflush(stdin);
        gets(s[i].rolln);
        printf("YEAR OF JOINING: ");
        fflush(stdin);
        gets(s[i].yearojo);
        printf("DEPATMENT: ");
        fflush(stdin);
        gets(s[i].dpt);
        printf("COURSE: ");
        fflush(stdin);
        gets(s[i].course);
        printf("\n\n");
    }
    do
    {                                
        printf("What do you want to know:1)Details of a student.\n\t\t\t2)Names of from same batch.");
        fflush(stdin);
        scanf("%d",&op);
        if(op==1)
            stuinfo(s,ne);
        else if(op==2)
            batch(s,ne);
        else
            exit(1);
        printf("Want to search again(y/n)?: ");
        fflush(stdin);
        scanf("%c",&run);
    }while(run=='y');      
}
void stuinfo(struct student s[450],int ne)
{
    int i;
    char r[25],status='n';
    printf("Enter roll number: ");
    fflush(stdin);
    gets(r);
    for(i=0;i<ne;i++)
    {
        if(strcmp(r,s[i].rolln)==0)
        {
            puts(s[i].rolln);
            puts(s[i].name);
            puts(s[i].dpt);
            puts(s[i].course);
            puts(s[i].yearojo);
            status='y';
            break;
        }
    }
    if(status=='n')
        printf("INVALID ROLL NUMBER.\n");
}
void batch(struct student s[450],int ne)
{
    char year[5],status='n';int i,numberofentries=0;
    printf("Enter the year: ");
    fflush(stdin);
    gets(year);
    for(i=0;i<ne;i++)
    {
        if(strcmp(year,s[i].yearojo)==0)
        {
            puts(s[i].rolln);
            puts(s[i].name);
            puts(s[i].dpt);
            puts(s[i].course);
            printf("\n\n");
            status='y';
            numberofentries++;
        }
    }
    if(status=='y')
        printf("Total %d Entries Found.\n",numberofentries);
    else if(status=='n')
        printf("No Entries Found.\n");
}
