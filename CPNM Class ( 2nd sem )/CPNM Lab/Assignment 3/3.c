/*3. Input two integer numbers and divide the larger number by the smaller one. Then display the
result using printf() function as a fractional number first and then as a real valued number.
(Example: 9 divided by 5 shall yield “4/5” and “1.8” respectively.)*/

#include<stdio.h>
int main()
{
    int num1, num2;
    float k;

    printf("\n\n\nEnter two intiger numbers(give an space after entering each intiger and an enter at the end) : ");
    scanf("%d%d",&num1,&num2);

    
    if(num1>num2)
    {

        k = (1.000 * num1)/num2;
        printf("%d/%d\n%f",num1%num2,num2,k);
    }
    else
    {
        k = (1.000 * num2)/num1;
        printf("%d/%d\n%f",num2%num1,num1,k);
    }
    return 0;
}