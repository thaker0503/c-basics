/* Printing anything using inbuilt function */

#include stdio.h
#include conio.h                   /* basic header files */
void main()
{
  printf("Hello World!");
}

/* Printing anything using a variable */

#include stdio.h
#include conio.h                   /* basic header files */
void main()
{
  int a;                           /* defining a variable */
  a= "Hello World!" ;              /* assigning value to a as string */
  printf("%d",&a);                 /* pointing value of a in this line */ 
}
