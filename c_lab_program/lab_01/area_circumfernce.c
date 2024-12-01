//C-Program to calculate the area and circumference of a circle using PI as a defined  constant.
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
 float radius, area,circumfernce;
 printf("Enter the radius of a circle\n");
 scanf("%f", &radius);
 area = PI*radius*radius;
 circumfernce=2*pi*radius;
 printf("Area of the circle = %.2f\n", area); // printing upto two decimal places
 printf("circumfernce of the circle = %f\n",circumfernce);
 return 0;
}

