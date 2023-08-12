#include <stdio.h>

//highest number from input of three

int main()
{   int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && c>a)
     printf("%d",c);

    else if(b>a && c>b)
     printf("%d",c);

    else if(c>a && b>c)
     printf("%d",b);

    else if(a>c && b>a)
     printf("%d",b);

    else if(b>c && a>c)
    printf("%d",a);

    else if(c>b && a>c)
     printf("%d",a);

    return 0; 



}