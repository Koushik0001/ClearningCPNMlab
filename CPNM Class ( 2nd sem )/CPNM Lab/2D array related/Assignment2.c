#include<stdio.h>

int main()
{
    int baseaddress, element_size,i,j,address,row,column;
    printf("\n\nEnter the array specifications e.g. A[3][4] : ");
    scanf("A[%d][%d]",&row,&column);
    printf("Enter the base address of the array : ");
    scanf("%d",&baseaddress);
    fflush(stdin);
    printf("Enter the element size : ");
    scanf("%d",&element_size);
    fflush(stdin);

    printf("Enter the element whose address is needed (A[i][j]): ");
    scanf("A[%d][%d]",&i,&j);

    address = baseaddress + (i*column*element_size) + (j*element_size);
    printf("Address of the element is : %d\n\n",address);
    return 0;
}