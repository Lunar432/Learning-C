#include <stdio.h>

//validity of triangle from angles

int main()
{  float a,b,c;
   printf("Enter three angles of triangle: ");
   scanf("%f%f%f",&a,&b,&c);

   if((a+b+c)==180.0)
    printf("The triangle is valid");

   else if((a+b+c)!=180.0) 
    printf("The triangle is not valid");

   else
    printf("The triangle is not valid");

   return 0;
}