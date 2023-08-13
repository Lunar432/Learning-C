#include <stdio.h>

//sum of natural numbers using recursion

int recurse(int n,int sum)
{
    if(n!=0)
    {
        return recurse(n-1,sum+=n);
    }
    else
       return sum;
}

int main()
{
    int n,sum=0,result;
    printf("Enter positive number: ");
    scanf("%d",&n);
    result= recurse(n,sum);
    printf("Sum of natural numbers until %d is: %d",n,result);
    return 0;

}
