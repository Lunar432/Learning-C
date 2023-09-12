#include <stdio.h>

//fibonacci series using recursion

void fibonacci(int i,int c,int n,int a,int b)
{   
    if(i<n)
    {
    printf("%d, ",c);
    a=b;
    b=c;
    c=a+b;
    i=i+1;
    fibonacci(i,c,n,a,b);
    }
}
int main()
{
    int a=0,b=1,c=a+b,i=2,n;
    printf("\nEnter number of terms: ");
    scanf("%d",&n);
    printf("\n%d, %d, ",a,b);
    fibonacci(i,c,n,a,b);
    return 0;
}