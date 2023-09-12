#include <stdio.h>

//Calculate number of people older than average age 
 
int main()
{
    int age[50],n,avg,sum=0,count=0;
    printf("Enter number of person: \n");
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        printf("Enter age: \n");
        scanf("%d",&age[a]);
        sum+=age[a];
    }
    avg= (sum/n);
    for(int a=0;a<n;a++)
    {
     if(age[a]>avg)
     {
          count++;
     }
    }
    printf("Number of people older than average age: %d\n",count);
    return 0;
}