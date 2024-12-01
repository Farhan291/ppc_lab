// C program to find grade of a student
#include <stdio.h> 
#include <stdlib.h> 
void main() { 
 float s1,s2,s3,s4,s5,s6,total=0,per=0 ;


 printf("Enter the marks of student in six subjects\n"); 
 scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6); 
 if((s1<40)||(s2<40)||(s3<40)||(s4<40)||(s5<40)||(s6<40)) 
 { 
 printf("Fail\n"); 
 exit(0); 
 } 

 total=s1+s2+s3+s4+s5+s6; 

 per=total/6; 

 if(per>=90) 

	 printf("S grade\n"); 

 else if(per>=75) 

	 printf("A grade\n"); 

 else if(per>=60) 

	 printf("B grade\n"); 

 else if(per>=50) 

	 printf("C grade\n"); 

 else if(per>=40) 

	 printf("D grade\n"); 

 else 

	 printf("Fail"); 
}
