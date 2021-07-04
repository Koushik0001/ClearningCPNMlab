/*9. Write a C program that prints the following patterns for the input of n=5. The value of n is input
by the user.
A. 1
  1 1
 1 1 1
 
B.    1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1 */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("A:\n\n");
    for(int i=1;i<n-1;i++)
    {
        for (int j=1;j<=i;j++)
            printf("1\t");
        printf("\n");          
    }
    printf("\n\n");
    
    printf("B:\n\n");
    for (int i=1; i<=n-1; i++)
    {
        int j = n-i;
        for(int k=0; k<j ;k++)
            printf("\t");
        for (int k =1 ; k<=i; k++)
            printf("%d\t",k);
        for(int k=i-1;k>0;k--)
            printf("%d\t",k);
        printf("\n");
    }
    
    
    return 0;
}