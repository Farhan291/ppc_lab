#include<stdio.h>
#define ARY_SIZE 5
int main()
{
int sqrarr[ARY_SIZE];
for(int i=0 ; i< ARY_SIZE ; i++)
sqrarr[i]=i*i;
printf("Element\tSquare\n");
for(int i=0 ; i< ARY_SIZE ; i++)
printf("%5d\t%4d\n" , i, sqrarr[i]);
return 0;
}
