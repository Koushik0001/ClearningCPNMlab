#include<stdio.h>
float binary_to_dcimal(float);


int main()
{
    int op;
    printf("Enter a number in number system:\n\t1)Binary\n\t2)Ocatl\n\t3)Hex\n\n\t");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        float bin, decimal;
        printf("\nenter the binary number: ");
        scanf("%f",&bin);
        decimal = binary_to_dcimal(bin);
        break;
    
    case 2:
        float oct;
        break;

    case 3:

        break;

    case 4:

        break;

    }
    return 0;
}

float binary_to_dcimal(float bin)
{
    
}
