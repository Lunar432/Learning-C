#include <stdio.h>

//nesting in function calls

void del(int p)
{
    p=p+5;
    printf("%d",p);
}

void budbud(int a,int b)
{    int c;
     c= a+b;
     del(c);
}

int main()
{
    int c,d;
    printf("Enter two numbers here: \n");
    scanf("%d%d",&c,&d);
    budbud(c,d);
    return 0;
}