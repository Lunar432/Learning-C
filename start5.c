#include <stdio.h>

//triangle is equilateral,isosceles or scalene

int main()
{   int  a,b,c;
    printf("Enter length of three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
     printf("The triangle is an equilateral triangle");

    else if(a==b && a!=c || a==c && b!=c || b==c && a!=c)
     printf("The triangle is an isosceles triangle");

    else if(a!=b && b!=c || b!=c && c!=a || c!=a && c!=b)
     printf("The triangle is a scalene triangle");

    else
     printf("Error");

    return 0;    
}