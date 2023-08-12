#include <stdio.h>

//fibonacci series

int main()
{
    int a=0,b=1,c=a+b,i,n;
    printf("Enter number of terms of the series: \n");
    scanf("%d",&n);
    printf("%d, %d, ",a,b);
    for(i=3;i<=n;i++)
    {
        printf("%d, ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
    
}