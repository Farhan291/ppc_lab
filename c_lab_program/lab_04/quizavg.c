#include<stdio.h>
#define QUIZ_WEIGHT 30
#define MIDTERM_WEIGHT 40
#define FINAL_WEIGHT 30
#define QUIZ_MAX 400.00
#define MIDTERM_MAX 200.0
#define FINAL_MAX 100.00
int main()
{
int quiz1,quiz2,quiz3,quiz4,totalquiz;
int midterm1,midterm2,totalmidterm,final;
float quizpercent,midtermpercent,finalpercent,totalpercent;

printf("Enter the score of first quiz:");
scanf("%d",&quiz1);
printf("Enter the score of second quiz:");
scanf("%d",&quiz2);
printf("Enter the score of third quiz:");
scanf("%d",&quiz3);
printf("Enter the score of fourth quiz:");
scanf("%d",&quiz4);
printf("enter the score of first midterm:");
scanf("%d",&midterm1);
printf("enter the score of seconf midterm:");
scanf("%d",&midterm2);
printf("enter the score of Final:");
scanf("%d",&final);
totalquiz=quiz1+quiz2+quiz3+quiz4;
totalmidterm=midterm1+midterm2;
quizpercent=(float)totalquiz*QUIZ_WEIGHT/QUIZ_MAX;
midtermpercent=(float)totalmidterm*MIDTERM_WEIGHT/MIDTERM_MAX;
finalpercent=(float)final*FINAL_WEIGHT/FINAL_MAX;
totalpercent=quizpercent+midtermpercent+finalpercent;
printf(" quiz 1:%d\n",quiz1);
printf(" quiz 2:%d\n",quiz2);
printf(" quiz 3:%d\n",quiz3);
printf(" quiz 4:%d\n",quiz4);
printf(" quiz total:%d\n",totalquiz);
printf("midterm 1:%4d\n",midterm1);
printf("midterm 2:%4d\n",midterm2);
printf("midterm total:%4d\n",totalmidterm);
printf("Final :%4d\n",final);
printf("quiz %6.1lf\n",quizpercent);
printf("midterm %6.1lf\n",midtermpercent);
printf("final %6.1lf\n",finalpercent);
printf("total %6.1lf\n",totalpercent);
return 0;
}
