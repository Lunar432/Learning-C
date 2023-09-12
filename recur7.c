#include <stdio.h>

//Binary to hexadecimal using recursion

void decitohexa(int d)
{ 
    if((d%16)!=0)
    {
       decitohexa(d/16);
       if((d%16)<10)
       {
         printf("%c",(d%16)+48);
       }
       if((d%16)>9)
       {
         printf("%c",(d%16)+55);
       }
    }
}
int bintodeci(int bin,int d,int i)
{
   if(bin!=0)
   {
     return bintodeci(bin/10,(d+=((bin%10)*i)),(i*2));
   }
   else
   {
    printf("\nValue in hexadecimal is: ");
    decitohexa(d);
    printf("\n");
    return 0;
   }
}

int main()
{  long int bin;
   int d=0,i=1;
   printf("\nEnter value in binary: ");
   scanf("%ld",&bin);
   bintodeci(bin,d,i);
   return 0;
}