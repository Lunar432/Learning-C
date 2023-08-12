#include <stdio.h>
#include <math.h>

//Convert decimal to binary

int main()
{
    int a,r,d,i=1;
    long long b=0;
    printf("Enter value in decimal: \n");
    scanf("%d",&d);
    while(d!=0)
    {r=d%2;
     d=d/2;
     b=b+(r*i);
     i=i*10;
    }
    printf("Value in binary is: %lld\n",b);
    return 0;
}