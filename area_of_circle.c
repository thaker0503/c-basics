/* Program to calculate the are of a circle */
#include<stdio.h>
#include<conio.h>
#define PI 3.14159
float process(float radius)         /* function prototype */
main()
{
  clrscr();
  float radius, area;               /* variable declaration */
  
  printf("Radius = ");
  scanf("%f", &radius);
  area=process(radius);
  printf("Area = %f", area);
  getch();
}
float process(float r)              /* function defnition */
{
  float a;                          /* local variable declaration */
  
  a= PI*r*r;
  return(a);
}
