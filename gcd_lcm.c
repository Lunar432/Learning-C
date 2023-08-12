#include <stdio.h>

//find gcd and lcm of two numbers using while loop and lcm formula

int main()
{   int a,b,x,y,r,gcd,lcm;
    printf("Enter two numbers: \n");
    scanf("%d%d",&x,&y);
    a= (x>y)? x:y;
    b= (x<y)? x:y;
    
    while(a%b!=0)
     { r= a%b;
       a=b;
       b=r;
     }

    gcd= r;
    lcm= (x*y)/gcd;
    printf("GCD of %d and %d is %d\n",x,y,gcd);
    printf("LCM of %d and %d is %d\n",x,y,lcm);
    return 0;
}