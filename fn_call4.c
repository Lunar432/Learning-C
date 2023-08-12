#include <stdio.h>

//nesting with pass by reference

void go(int *c)
{
    *c=*c+5;
    printf("%d",*c);
}

void another(int *c,int *d)
{
    int e;
    e= (*c)-(*d);
    go(&e);
}

int main()
{   int a,b;
    printf("Enter two numbers here: ");
    scanf("%d%d",&a,&b);
    another(&a,&b);
    return 0;
}