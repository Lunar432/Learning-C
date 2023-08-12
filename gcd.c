#include <stdio.h>

// Find gcd of a and b

int main() 
{   int a,b,r,i,gcd;
    printf("Value of a: ");
    scanf("%d",&a);
    printf("Value of b: ");
    scanf("%d",&b);
    for(i=0;b!=0;i++)
    {
        r=b;
        b=a%b;
        a=r;
        gcd=r;
    }
    printf("GCD of a and b is: %d",gcd);
    return 0;
}