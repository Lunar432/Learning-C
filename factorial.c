#include <stdio.h>

//factorial of a number

int main()
{
    int num,i,facto=1;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        facto=facto*i;
    }
    printf("Factorial of %d is %d",num,facto);

    return 0;
}