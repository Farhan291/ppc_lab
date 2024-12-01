//C-Program to evaluate two complex expressions
#include<stdio.h>
int main()
{
//local declarations
int a=3;
int b=4;
int c=5;
int x;
int y;
//statements
printf("initial values of variables:\n");
printf("a=%d\tb=%d\tc=%d\n\n",a,b,c);
x=a*4+b/2-c*b;
printf("value of the expression a*4+b/2-c*b :%d\n",x);
y=--a*(3+b)/2-c++*b;
printf("value of the expression --a*(3+b)/2-c++*b :%d\n",y);
printf("values of variables are now:\n");
printf("a=%d\tb=%d\tc=%d\n\n",a,b,c);
return 0;
}

