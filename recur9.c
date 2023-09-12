#include <stdio.h>

//Check prime number using recursion

int primenum(int n,int i)
{
    if(n<=1)
    return 0;

    if(i==1)
    return 1;
    
    if(n%i==0)
    return 0;
    
    return primenum(n,i-1);
}

int main()
{
    int i,n,isprime;
    printf("Enter number: ");
    scanf("%d",&n);
    isprime= primenum(n,n/2);
    if(isprime)
    {
        printf("%d is prime number",n);
    }
    else
    printf("%d is not prime number",n);


    return 0;
}