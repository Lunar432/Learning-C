#include <stdio.h>

//example of pass by value in function call

void dot(int a)
{
    a=a+5;
    printf("dot function shows %d\n",a);
}

int main()
{   int c;
    printf("Enter a number here: ");
    scanf("%d",&c);
    dot(c);
    printf("main function shows %d\n",c);
    return 0;
}