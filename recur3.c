#include <stdio.h>

//find gcd of input number using recursion

int GCD(int x,int y)
{   if(y==0)
     return x;
    else
    return GCD(y,x%y); 
}

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    GCD(a,b);
    int gcd= GCD(a,b);
    printf("GCD of two numbers is: %d  ",gcd);
    return 0;
}