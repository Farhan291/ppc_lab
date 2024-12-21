//C-Program to calculate the total sales given the unit price, quantity, discount and tax rate

#include<stdio.h>
#define TAX_RATE 8.50
int main()
{
//local declarations
int quantity;
float discountrate;
float discountamt;
float unitprice;
float subtotal;
float subtaxable;
float taxam;
float total;
//statements
printf("enter the number of items sold:\n");
scanf("%d",&quantity);
printf("enter the unit price:\n");
scanf("%f",&unitprice);
printf("enter the discount rate(percent):\n");
scanf("%f",&discountrate);
subtotal=quantity*unitprice;
discountamt=subtotal*discountrate/100;
subtaxable=subtotal-discountamt;
taxam=subtaxable*TAX_RATE/100;
total=subtaxable+taxam;
printf("\n quantity sold: %6d\n",quantity);
printf("unit price of items : %9.2f\n",unitprice);
printf(" --------------\n");
printf("subtotal : %9.2f\n",subtotal);
printf("discount : %-9.2f\n",discountamt);

printf("discount total: %9.2f\n",subtaxable);
printf("sales tax: %+9.2f\n",taxam);
printf("Totsl sales: %9.2f\n",total);
return 0;
}
