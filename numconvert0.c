#include <stdio.h>
#include <math.h>

//Convert from binary to decimal

int main()
{ long long a;
  int r,d=0,i=0;
  printf("Enter value in binary: \n");
  scanf("%lld",&a);
  while(a!=0)
  {r= a%10;
   a= a/10;
   d= d+r*(pow(2,i));
   i++;
  }
  printf("Value in decimal is: %d\n",d);
  return 0;
}