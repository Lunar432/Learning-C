#include <stdio.h>

//convert decimal to octal    
   
int main()
{
    int oct=0,i=1,a,r;
    printf("Enter value in decimal: \n");
    scanf("%d",&a);
    printf("\n");
    while(a>0)
    {
     
      r= a%8;
      a= a/8;
      printf("%d\n",r);
      oct= oct+(r*i);
      i=i*10;
    }
    printf("Number in octal is: %d",oct);
    return 0;
}