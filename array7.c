#include <stdio.h>

//find sum, average, maximum and minimum temperature from array

int main()
{
    int temp[30],maxtemp,mintemp,avg,sum=0;
    printf("\nEnter temperature: ");
    for(int a=0;a<30;a++)
    {
        scanf("%d",&temp[a]);
        sum+=temp[a];
    }
    avg=(sum/30);
    maxtemp=temp[0];
    for(a=0;a<30;a++)
    {
        if(temp[a]>maxtemp)
        {
            maxtemp=temp[a];
        }
    }
    mintemp=temp[0];
    for(a=0;a<30;a++)
    {
        if(temp[a]<mintemp)
        {
            mintemp=temp[a];
        }
    }
    printf("Maximum temperature: %d\nMinimum temperature: %d\n",maxtemp,mintemp);
    printf("Sum of temperature: %d\nAverage temperature: %d\n",sum,avg);
    return 0;
}