#include<stdio.h>
#include<math.h>
struct complex
{
    float real, complex;
};

struct complex addition(struct complex,struct complex);
struct complex substraction(struct complex,struct complex);
struct complex multiplication(struct complex,struct complex);
struct complex division(struct complex,struct complex);

int main()
{
    struct complex a,b,g,d,e,f;
    printf("Enter the 1st comples number (real complex): ");
    scanf("%f%f",&a.real,&a.complex);

    printf("Enter the 2nd comples number (real complex): ");
    scanf("%f%f",&b.real,&b.complex);

    g = addition(a,b);
    d = substraction(a,b);
    e = multiplication(a,b);
    f = division(a,b);

    printf("addition = (%.2f) + (%.2f)i\n",g.real,g.complex);
    printf("substraction = (%.2f) + (%.2f)i\n",d.real,d.complex);
    printf("multiplication = (%.2f) + (%.2f)i\n",e.real,e.complex);
    printf("quotient = (%.2f) + (%.2f)i\n",f.real,f.complex);
    return 0;
}
struct complex addition(struct complex a,struct complex b)
{
    static struct complex add;
    add.real = a.real + b.real;
    add.complex = a.complex + b.complex;
    return add;
}
struct complex substraction(struct complex a,struct complex b)
{
    struct complex substract;
    substract.real = a.real - b.real;
    substract.complex = a.complex - b.complex;
    return substract;
}
struct complex multiplication(struct complex a,struct complex b)
{
    struct complex product;
    product.real = (a.real * b.real)-(a.complex * b.complex);
    product.complex = (a.complex * b.real) + (a.real * b.complex);
    return product;
}

struct complex division(struct complex a,struct complex b)
{
    float x;
    struct complex d, quotient;
    x = pow(b.real,2) + pow(b.complex,2);
    d.real = (a.real * b.real) + (a.complex * b.complex);
    d.complex = (a.complex * b.real) - (b.complex * a.real);
    quotient.real = d.real/x;
    quotient.complex = d.complex/x;
    return quotient;
}

