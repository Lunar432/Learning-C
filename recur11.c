#include <stdio.h>

//print ascending and descending numbers using recursion

void ascending(int num,int i)
{   
    if(i<=num)
    { 
        printf("%d ",i);
        ascending(num,i+1);
    }  
}

void descending(int num,int a)
{
    if(a>=1)
    {
        printf("%d ",a);
        descending(num,a-1);
    }
}
int main()
{
    int num,i=1;
    printf("Enter number of terms: ");
    scanf("%d",&num);
    int a=num;
    ascending(num,i);
    printf("\n");  
    descending(num,a);
    return 0;
}