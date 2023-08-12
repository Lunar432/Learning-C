#include <stdio.h>

//Convert decimal to octal using recursion

void octal(int d,int i,int oct)
{  int r;
    if(d!=0)
    {
        r=d%8;
        d=d/8;
        oct= (r*i)+oct;
        i=i*10;
        octal(d,i,oct);
    }
    else
    {
        printf("Value in octal is: %d",oct);
    }
}

int main()
{   int a,i=1,oct=0;
    printf("Enter value in decimal: ");
    scanf("%d",&a);
    octal(a,i,oct); 
    return 0;
}