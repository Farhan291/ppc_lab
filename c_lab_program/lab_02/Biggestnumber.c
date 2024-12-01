/* C Program to find biggest of three numbers using ternary operator */ 
#include <stdio.h> 
void main() 
{ 
 int a,b,c; 
 printf("Enter three numbers\n"); 
 scanf("%d%d%d",&a,&b,&c); 
 (a>b)? ((a>c)? printf("%d is biggest\n",a) : printf("%d is biggest\n",c)) :  
 (b>c)? printf("%d is biggest\n",b) : printf("%d is biggest\n",c);
 
}
