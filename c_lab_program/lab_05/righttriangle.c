// C-Program to print a number series from 1 to a user-specified limit in the form of a right triangle
#include<stdio.h>
int main()
{
int limit;
int linectrl ,numctrl;
//READ LIMIT
printf(“\n Please enter the limit from 1 to 9:\n”);
scanf(“%d”, &limit);
for(linectrl=1 ; linectrl <=limit; linectrl++)
{
for(numctrl=1; numctrl<=linectrl ; numctrl++)
{
printf(“%d”,numctrl);
}
printf(“\n”);
}
return 0;
}
