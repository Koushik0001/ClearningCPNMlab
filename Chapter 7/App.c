/*Creator Koushik Mahanta. Date:18/11/2020 */
#include<stdio.h>
int factorial(int);
float power(float,int);
int main(){
int m; char permission;
do
{
    printf("                           Wht do you want to know about?\n");
    printf("                              1>Factorial of the input number.\n");
    printf("                              2>Wheather it is Prime?\n");
    printf("                              3>Wheather it is Odd or even?\n");
    printf("                              4> x^y\n");
    fflush(stdin);
    scanf("                                   %d",&m);
    switch(m)
    {
        case 1:
        {   int num, facto;
            printf("                      FINDING FACTORIAL\n");
            printf("          Enter the number.\n     ");
            scanf("%d",&num);
            facto=factorial(num);
            printf("          %d! = %d ",num,facto);
            break;
        }
        case 2:
            printf("                     FINDING PRIME OR NOT?\n");
            int num2, divider2, remainder2;
            printf("           Enter the number.\n");
            fflush(stdin);
            scanf("               %d",&num2);
            for(divider2=2 ; divider2<=num2-1 ; divider2=divider2+1)
            {
                remainder2=num2%divider2;
                if(remainder2==0)
                {
                    printf("   # The number is not prime.\n");
                    break;
                }
            }   
            if(divider2==num2)
               printf("        # The number is prime.\n"); 
            break;
        case 3:
            printf("                     FINDING ODD OR EVEN?\n");
            int num3, remainder3;
            printf("          Enter the number.\n");
            fflush(stdin);
            scanf("                   %d",&num3);
            remainder3 = num3 % 2;
            if(remainder3==0)
                printf("        # The number is even.\n");
            else
                printf("        # The number is odd.\n\n\n\n");
        case 4:
            printf("                     FINDING x^y\n");
            float num1, ans;
            int pow;
            printf("            What is the number\n");
            scanf("%f",&num1);
            printf("            what is its power?\n");
            scanf("%d",&pow);
            ans = power(num1, pow);
            printf("              %f^%d = %f\n",num1,pow,ans);
            break;
}        
    printf("                   Want to run again?\n");
    printf("                      yes=y,no=n\n");
    fflush(stdin);
    scanf("%c",&permission);
}   while(permission=='y');                         
return 0;
}



int factorial(int num)
{
    int i, f=1;
    for(i=1;i<=num;i++)
        f=f*i;
    return(f);
}



float power(float num,int pow)
{
    int count;float num2;
    if(pow==1)
        return(num);
    else
    {
        num2=num*num;
        for(count=2;count<pow;count++)
            num2=num2*num;
        return(num2);
    }
}