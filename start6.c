#include <stdio.h>

//validity of triangle from sides 

int main()
{   int a,b,c;
    printf("Enter length of three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
     printf("The triangle is valid");
    
    else if(a+b==c || b+c==a || c+a==b)
    printf("The triangle is not valid");

    else
     printf("The triangle is not valid");

    return 0;
}