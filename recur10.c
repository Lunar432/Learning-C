#include <stdio.h>

//factorial of number using recursion

void factorial(int num,int facto,int i)
{
    if(i>=1)
    {
        factorial(num,(facto*i),i-1);
    }
    else
    printf("Factorial of %d is %d",num,facto);
}

int main()
{
    int num,i,facto=1;
    printf("Enter number: ");
    scanf("%d",&num);
    i=num;
    factorial(num,facto,i);
    return 0;
}