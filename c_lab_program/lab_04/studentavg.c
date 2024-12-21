#include<stdio.h>
int main()
{
int marks,temp;
/*C Program to Find Grade of a Student Using Switch Case*/
printf("\n-----------------------------------");
printf("\nEnter The Marks Between 0 To 100:");
printf("\nEnter The Mark: ");
scanf("%d", &marks);
if(marks>100)
{
/* Marks greater than 100 */
printf("\nDon't Be Smart Enter your Marks Between Limit\n");
}
else
{
temp=marks/10;
switch(temp)
{
case 10 :
case 9 :
/* Marks between 90-100 */
printf("\n Your Grade is: A");

break;
case 8 :
/* Marks between 80-89 */
printf("\n Your Grade is: B" );
break;
case 7 :
/* Marks between 70-79 */
printf("\n Your Grade is: C" );
break;
case 6 :
/* Marks between 60-69 */
printf("\n Your Grade is: D" );
break;
default :
/* Marks less than 40 */
printf("\n You Grade is: F or Fail\n");
}
}
return 0;
}
