//C-Program to demonstrate automatic and type casting of numeric
#include<stdio.h>
#include<stdbool.h>
int main()
{
//local declarations
bool b=true;
char c='A';
float d=245.3;
int i=3650;
short s=78;
//statements
printf("bool+char is char:%c\n",b+c);
printf("int * short is int: %d\n",i*s);
printf("float * char is float: %f\n",d*c);
c=c+b;
d=d+c;
b=false;
b=-d;
printf("\n After execution...\n");
printf("char +true: %c\n",c);
printf("float +char :%f\n",d);
printf("bool =-float:%f\n",b);
return 0;
}

