#include <stdio.h>

//divisible b 7 or 13

int main()
{   int a;
    printf("Enter a number here: ");
    scanf("%d",&a);

    if(a%7==0 && a%13==0)
     printf("Divisible by both 7 and 13");

    else if(a%7==0 || a%13==0) 
     printf("Divisible by 7 or 13");

    else if(a%7!=0 && a%13!=0)
     printf("Divisible by none of 7 and 13");

    return 0;  
}