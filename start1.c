#include <stdio.h>

//find gross salary of employee

int main()
{   int bs,hra,da,gs;
    printf("Enter basic salary if employee here: ");
    scanf("%d",&bs);

    if(bs<=10000)
     {
     hra= (20*bs)/100;
     da= (90*bs)/100;
     }
    else if(bs<=20000)
     {
      hra= (25*bs)/100;
      da= (90*bs)/100;
     }
    else if(bs>20000)
    {
     hra= (30*bs)/100;
     da= (95*bs)/100;
     }
    else
     { hra= 0;
    da= 0;
     }
    
    gs= bs+hra+da;
    printf("Gross salary of employee is %d",gs);
    return 0;
}