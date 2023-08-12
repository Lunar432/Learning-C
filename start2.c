#include <stdio.h>

//find income tax of person

int main()
{   int income,tax;
    printf("Enter income of person: ");
    scanf("%d",&income);
    
    if(income<150000)
     tax= 0;

    else if(income>150001 && income<300000)
     tax= (10*income)/100;

    else if(income>300001 && income<500000)
     tax= (20*income)/100;

    else if(income>500001)
     tax= (30*income)/100;

    else 
     tax= 0;

    printf("Income tax of the person is %d",tax);
    return 0;
}