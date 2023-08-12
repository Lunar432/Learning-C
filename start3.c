#include <stdio.h>

//quadrant of 2D point

int main()
{   int x,y;
    printf("Enter value of x here: ");
    scanf("%d",&x);
    printf("Enter value of y here: ");
    scanf("%d",&y);

    if(x>0 && y>0)
     printf("Point is on 1st quadrant");
    
    else if(x<0 && y>0)
     printf("Point is on 2nd quadrant");

    else if(x<0 && y<0)
     printf("Point is on 3rd quadrant");

    else if(x>0 && y<0)
     printf("Point is on 4th quadrant");

    else
     printf("Error");

    return 0;  
}