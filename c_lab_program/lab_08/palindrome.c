#include <stdio.h>
int checkpali()
{
	int number;
	int t,rem,rev=0;
	t=number;
	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	if(t==rev)
		return 0;
	else
		return 1;
}
int main()
{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	if(checkpali(number)==0)
		printf("the number is palindrome");
	else
		printf("the number is not palindrome");
	return 0;
}
