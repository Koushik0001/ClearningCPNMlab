#include<stdio.h>

void insertion_sort(int [],int);

int find_prime_factors(int,int[]);
int largest_common_factor(int[],int,int[],int);

int main()
{
    int num1, num2, hcf;
    int pf_num1[40],number_of_pf_num1, pf_num2[40],number_of_pf_num2;
    printf("Enter two intiger numbers : ");
    scanf("%d%d",&num1,&num2);

    number_of_pf_num1 = find_prime_factors(num1,pf_num1);
    number_of_pf_num2 = find_prime_factors(num2,pf_num2);

    insertion_sort(pf_num1,number_of_pf_num1);
    insertion_sort(pf_num2,number_of_pf_num2);

    if(number_of_pf_num1==0 || number_of_pf_num2==0)
        hcf = 1;
    else if(number_of_pf_num1>number_of_pf_num2)
        hcf = largest_common_factor(pf_num1, number_of_pf_num1, pf_num2, number_of_pf_num2);
    else if(number_of_pf_num1<number_of_pf_num2)
       hcf = largest_common_factor(pf_num2, number_of_pf_num2, pf_num1, number_of_pf_num1);
    else
    {
        if(pf_num2[0]<pf_num1[0])
            hcf = largest_common_factor(pf_num1, number_of_pf_num1, pf_num2, number_of_pf_num2);
        else
            hcf = largest_common_factor(pf_num2, number_of_pf_num2, pf_num1, number_of_pf_num1);
    } 

    float x;
    if (num1 < num2)
    {
        x = num2/num1;
        printf("%d/%d = %f",num2/hcf,num1/hcf,num2/num1);
    }
    else
    {
        x = num1/num2;
        printf("%d/%d = %f",num1/hcf,num2/hcf,num1/num2);
    }
    return 0;
}

int find_prime_factors(int num, int prime_factors[])
{
    int i, j=0, t=num;

    for (i=2;i<=num; i++)
    {
        while(t%i == 0)
        {
            prime_factors[j]= i;
            t = t/i; 
            j++;
        }
        j-1;
    }
    if(j==0)
    {
        j=1;
        prime_factors[0]=num;
    }
    return (j);
}

int largest_common_factor(int pf_num1[],int npfnum1,int pf_num2[],int npfnum2 )
{
    for(int i=0;i<npfnum1;i++)
        printf("%d *",pf_num1[i]);
    printf("\n\n");
    for(int i=0;i<npfnum2;i++)
        printf("%d *",pf_num2[i]);
    
    int hcf = 1;
    int j = 0;
    for(int i=0; i<npfnum2; i++)
    {
        if(i<npfnum2 && j==npfnum1)
            j=0;
        while(j<npfnum1)
        {
            if(pf_num2[i]==pf_num1[j])
            {
                hcf = hcf * pf_num2[i];
                j++;
                break; 
            }
            j++;
        }
    }
    printf("\n hcf = %d\n\n",hcf);
    return(hcf);
}

void insertion_sort(int A[],int nn)
{
int i,j;
for(j=1;j<nn;j++)
    {
        i=j-1;
        while((i>=0) && (A[i]>A[i+1]))
        {
            int t;
            t=A[i];
            A[i]=A[i+1];
            A[i+1]=t;

            i--;
        }
    }
}
