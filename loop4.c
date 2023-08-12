#include <stdio.h>

//Find sum of arithmetic series with common difference 1

int main()
{
    int n,i,sum=0;
    printf("Enter largest number of arithmetic series: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { sum=sum+i;
    } 
    printf("Sum of arithmetic series is %d\n",sum);
    return 0;

}