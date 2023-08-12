#include <stdio.h>

//pass by reference example
//address passes by pointer and main function value changes

void bot(int *a)
{
    *a=*a+5;
    printf("bot function shows %d\n",*a);
}

int main()
{   int a,b,c;
    printf("Enter two numbers here: \n");
    scanf("%d%d",&a,&b);
    c= a+b;
    bot(&c);
    printf("main function shows %d\n",c);
    return 0;
}