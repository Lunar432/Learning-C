#include <stdio.h>

//check prime numbers using recursion

int prime(int n,int a)
{  
    if(n<=1)
      return 0;

    if(n==a)
        return 1;  
       
    if(n%a==0)
      return 0;
       
    return prime(n,a+1);
}

int main()
{
    int n,a=2;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(prime(n,a))
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    return 0;
}