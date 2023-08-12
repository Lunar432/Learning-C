#include <stdio.h>

//decimal to hexadecimal using recursion

void hexa(int n)
{
    if(n!=0)
    {
        hexa(n/16);

        if(n%16<10)
        {
            printf("%d",n%16);
        }

        else if(n%16>9)
        {
            printf("%c",(n%16)+55);
        }
    }
}

int main()
{
    int n;
    printf("Enter value in decimal: ");
    scanf("%d",&n);
    printf("Hexidecimal number is: ");
    hexa(n);
    return 0;
}