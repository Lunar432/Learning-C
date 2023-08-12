#include <stdio.h>

//median number from input of three

int main()
{   int a,b,c;
    printf("Enter three numbers here:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && c>a)
     printf("%d",a);

    else if(b>a && c>b)
     printf("%d",b);

    else if(b>c && a>b)
     printf("%d",b);

    else if(c>b && a>c)
     printf("%d",c);

    else if(c>a && b>c)
     printf("%d",c);

    else if(a>c && b>a)
     printf("%d",a);

    return 0;     
}