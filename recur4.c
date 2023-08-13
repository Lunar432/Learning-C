#include <stdio.h>

int recurse(int n,int sum)
{
    if(n!=0)
    {
        return recurse(n-1,sum+=n);
    }
    else
       return sum;
}

int main()
{
    int n,sum=0,result;
    printf("Enter positive number: ");
    scanf("%d",&n);
    result= recurse(n,sum);
    printf("%d",result);
    return 0;

}
