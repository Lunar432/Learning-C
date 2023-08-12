#include <stdio.h>

//function calling without pointers 1

void ato(int a,int b)
{   int c;
    c= a+b;
    printf("Sum:%d ",c);
}

int main()
{   int c,d;
    printf("Enter two numbers here: ");
    scanf("%d%d",&c,&d);
    ato(c,d);
    return 0;
}