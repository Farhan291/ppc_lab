#include<stdio.h>
#include<ctype.h>
int main()
{
char charIn;
printf("enter the character to be examined\n");
scanf("%c", &charIn);
if(islower(charIn))
printf("You have entered a lower case letter\n");
else if(isupper(charIn))
printf("You have entered a UPPER case letter\n");
else if(isdigit(charIn))
printf("You have entered a digit\n");
else if(ispunct(charIn))
printf("You have entered a Punctuation character\n");
else if(isspace(charIn))
printf("You have entered a Whitespace character\n");

else
printf("You have entered a control character\n");
return 0;
} 
