#include <stdio.h>

//Find sum of arithmetic series

int main()
{
    int a,d,n,i,sum;
    printf("Enter first term of series: \n");
    scanf("%d",&a);
    printf("Enter common difference of series: \n");
    scanf("%d",&d);
    printf("Enter nth term of series: \n");
    scanf("%d",&n);
    i=1;
    sum=a;
    while(i<n)
    {   
        a=a+d;
        sum=sum+a;
        i++;
    }
    printf("Sum of series is %d",sum);
    return 0;
}