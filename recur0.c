#include <stdio.h>

//Convert decimal to binary using recursion

void binary(int b)
{
    int r,bin=0,i=1;
    if(b!=0)
    {
     r=b%2;
     b=b/2;
     bin=(r*i)+bin;
     i=i*10;
     binary(b);
    }
    printf("Value in binary is: %d",bin);

}

int main()
{   int a;
    printf("Enter value in decimal: ");
    scanf("%d",&a);
    binary(a);
    return 0;
}