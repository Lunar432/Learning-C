#include <stdio.h>

//Calculate average of seven days temperature from array

int main()
{
    float temp[7],avg,sum=0;
    int a=0;
    while(a<7)
    {
      printf("Enter temperature: \n");
      scanf("%f",&temp[a]);
      sum+=temp[a];
      a++;
    }
    avg=(sum/7);
    printf("Average temperature of seven days is: %f",avg);
    return 0;
}