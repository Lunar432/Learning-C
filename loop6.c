#include <stdio.h>

//print multiplication table

int main()
{
    int n,a;
    printf("Enter number: \n");
    scanf("%d",&n);
    a=1;
    while(a<13)
    {
        printf("%d X %d = %d\n",n,a,n*a);
        a++;
    }
    return 0;
}