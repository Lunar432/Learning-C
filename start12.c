#include <stdio.h>

//difference between highest and lowest from input of three

int main()
{   int a,b,c,d;
    printf("Enter three numbers here: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && c>a)
     d=c-b;
    else if(b>a && c>b)
     d= c-a;

    else if(b>c && a>b)
     d= a-c;

    else if(c>b && a>c)
     d= a-b;

    else if(c>a && b>c)
     d= b-a;

    else if(a>c && b>a)
     d= b-c;

    printf("%d",d);
    return 0;   
}