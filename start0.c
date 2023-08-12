#include <stdio.h>

//get next odd number as ouput

int main()
{   int a,b,c;
    printf("Enter an integer number here: ");
    scanf("%d",&a);
    b= a%2;

    if(b==0)
     c=a+1;

    else if(b!=0)
     c=a+2;

    else 
     c=0;

    printf("The next odd number is %d",c);
    return 0;    
}