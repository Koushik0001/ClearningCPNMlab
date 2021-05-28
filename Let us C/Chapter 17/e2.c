#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct customer
{
    char accno[25],name[25]; float balance;
}s[200];
int nc;
void bh(struct customer s[200],int); //bh==balance under hundrade
void wd(struct customer s[200],int); //wd==withdrawal or deposit
void main()
{
    int i,st; char op='n';
    printf("How manrey customers you want to enroll: ");
    scanf("%d",&nc);
    printf("ENTER tHE DETAILS OF THE CUSTOMERS.\n");
    for(i=0;i<nc;i++)
    {
        printf("Enter the details of the %d th customer.\n",i+1);
        printf("    Account no. ");
        fflush(stdin);
        gets(s[i].accno);
        printf("    Name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("    Balance: ");
        fflush(stdin);
        scanf("%f",&s[i].balance);
        printf("\n\n");
    }
    do
    {                                                                                           
        printf("What do you want to know?  1)Accout numbers of customers balance below Rs.100.\n                           2)Withdrawal or Deposite form.\n");
        fflush(stdin);
        scanf("%d",&st);
        switch(st)
        {
            case 1:
                bh(s,nc );
                break;
            case 2:
                wd(s,nc);
        }
        printf("Do want to run the program again?(y/n)\n");
        fflush(stdin);
        scanf("%c",&op);
    } while (op=='y');
}

void bh(struct customer s[200],int nc)
{
    int i,k=0;
    for(i=0;i<nc;i++)
    {
        if(s[i].balance<100)
        {
            puts(s[i].accno);
            puts(s[i].name);
            printf("\n\n");
            k++;
        }
    }
    if(k==0)
        printf("Every customer of this bank is reach indian citizen.");
}

void wd(struct customer s[200],int nc)
{
    char an[25], nam[25],status='n';int i,op;float amot;
    printf("What is yur account number: ");
    fflush(stdin);
    gets(an);
    printf("What is your name: ");
    fflush(stdin);
    gets(nam);
    for(i=0;i<nc;i++)
    {
        if((strcmp(an,s[i].accno)==0)&&(strcmp(nam,s[i].name))==0)
        {
            printf("What do you want to do.\n     1)Deposite. 2)Witdraw.");
            scanf("%d",&op);
            switch(op)
            {
                case 1:
                    printf("Enter the amount: ");
                    scanf("%f",&amot);
                case 2:
                    printf("Enter the amount: ");
                    scanf("%f",&amot);
                    if(s[i].balance-amot<100)
                        printf("The Balance is insufficient for the specified withdrawl.");

            }
            status='y';
            break;
        }
    }
    if(status=='n')
        printf("Account dosen't exist.");
}