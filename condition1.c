#include <stdio.h>
#include <string.h>

//simple interest calculator

int main()
{
    float prin,rate,time,interest;
    char acc[50];
    printf("Enter principal amount: ");
    scanf("%f",&prin);
    printf("\nEnter rate of interest: ");
    scanf("%f",&rate);
    printf("Days/Months/Years: ");
    scanf("%s",acc);
    printf("\nEnter time in days,months or years: ");
    scanf("%f",&time);

    if(strcmp(acc,"Years")==0)
    {
        interest=prin*(rate/100)*time;
    }

    else if(strcmp(acc,"Months"))
    {
        time=time/12;
        interest=prin*(rate/100)*time;
    }

    else if(strcmp(acc,"Days"))
    {
        time=time/365;
        interest=prin*(rate/100)*time;
    }
    printf("Interest is %f",interest);
    return 0;
}