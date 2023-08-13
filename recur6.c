#include <stdio.h>

//power of a number using recursion

int power(int a,int p,int c,int b)
{  
   if(c!=p)
   {
    b*=a;
    c++;
    return power(a,p,c,b);
   }
   else return b; 
   
}
int main()
{   
    int a,p,value,c=0,b=1;
    printf("Enter base: \n");
    scanf("%d",&a);
    printf("Enter power: \n");
    scanf("%d",&p);
    value= power(a,p,c,b);
    printf("%d raised to the power %d is: %d",a,p,value);
    return 0;

}