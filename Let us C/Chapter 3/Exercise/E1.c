/* If cost price and selling prise of aqn item are input through the keyboard,
wrote a programe to determine whether the seller has made profit or incurred
loss. Also determoine how muchprofite he made or loss he incurred. */

#include<stdio.h>
int main()
{
float price,sprice, profit, loss;
printf("what is the price of the item?\n");
scanf("%f",&price);
printf("what is the selling price?\n");
scanf("%f",&sprice);
if(sprice>=price)
    {
        profit=sprice-price;
        printf("The profit is %f\n",profit);
    }
else
    {
        loss=price-sprice;
        printf("The loss is %f\n",loss);
    }
//koushik is learning git with the help of this file.
while((char zp = getchar()) != '\n');


return 0;
}