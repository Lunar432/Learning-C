#include <stdio.h>

//two input numbers divisible by each other or not

int main()
{   int a,b;
    printf("Enter two numbers here: ");
    scanf("%d%d",&a,&b);

    if(a%b==0 && b%a!=0 || b%a==0 && a%b!=0)
     printf("Only one is divisible by another");

    else if(a%b==0 && b%a==0)
     printf("Both is divisible by each other");

    else if(a%b!=0 && b%a!=0) 
     printf("None is divisible by the other");

    return 0;
}