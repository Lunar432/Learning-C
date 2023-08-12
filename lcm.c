#include <stdio.h>

//Find lcm of a and b

int main()
{
    int a,b,x,lcm;
    printf("Value of a:\n");
    scanf("%d",&a);
    printf("Value of b:\n");
    scanf("%d",&b);
    if(a>b)
    {x=a;
    }
    else if(b>a)
    {x=b;
    }
    for(;;)
     {if(x%a==0 && x%b==0)
      {lcm=x;
      break;
      }
      x++;
     }
    printf("LCM of a and b is:%d",lcm);
    return 0;

}