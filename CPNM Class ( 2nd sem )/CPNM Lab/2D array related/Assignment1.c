#include<stdio.h>

int main()
{
    int a[3][5];
    printf("\n\na = %u\n",a);
    printf("&a[0][0] = %u\n",&a[0][0]);
    printf("&a[2][3] = %u\n",&a[2][3]);
    printf("a[2]+3 = %u\n",a[2]+3);
    printf("*(a+2)+3 = %u\n",*(a+2)+3);
    printf("*(a+2) = %u\n",*(a+2));
    printf("a[2] = %u\n",a[2]);
    printf("&a[2][0] = %u\n",&a[2][0]);
    printf("(a+2) = %u\n",(a+2));
    printf("&a[2] = %u\n\n\n",&a[2]);
    return 0;
}