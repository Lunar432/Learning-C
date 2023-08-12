#include <stdio.h>
#include <stdlib.h>

//find gcd and lcm without formula

int gcd(int x,int y)
{   int a,b,r;
    a= (x>y)? x:y;
    b= (x<y)? x:y;
    while(a%b!=0)
     {  r=a%b;
        a=b;
        b=r;
     }

    return r;
}

int lcm(int x,int y)
{   int a;
    a= (x>y)? x:y;
    
    while(1)
     {   if(a%x==0 && a%y==0)
         return a;
         a++;
       }
}

int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d\n",a,b,gcd(a,b));
    printf("LCM of %d and %d is %d\n",a,b,lcm(a,b));
    return 0;
}