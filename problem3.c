#include <stdio.h>

//Calculate number of days of immediate increase from previous day

int main()
{   int temp[7],a,count=0; 
    for(a=0;a!=7;a++)
    {
    printf("Enter temperature: \n");
    scanf("%d",&temp[a]);
    
    }
    for(a=0;a!=7;a++)
    {
        if(temp[a+1]>temp[a])
        {
            count++;
        }
    }
    printf("Number of days of immediate increase: %d\n",count);
    return 0;
}