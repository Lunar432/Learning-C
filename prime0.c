#include <stdio.h>

//check1 prime number

int main()
{
    int n,a,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0 || n==1)
    { flag=1;
    }
    for(a=2;a<=n/2;a++)
    {
        if(n%a==0)
        {
         flag=1;
         break;
        } 
    }
    if(flag==0)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
    return 0;
}