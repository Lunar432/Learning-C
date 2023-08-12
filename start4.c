#include <stdio.h>

//whether two 2D point fall on same axis

int main()
{   int x1,x2,y1,y2;
    printf("Enter value of X1: ");
    scanf("%d",&x1);
    printf("Enter value of Y1: ");
    scanf("%d",&y1);
    printf("Enter value of X2: ");
    scanf("%d",&x2);
    printf("Enter value of Y2: ");
    scanf("%d",&y2);

    if(x1>0 && y1>0 && x2>0 && y2>0)
     printf("The points fall on the same axis");

    else if(x1>0 && y1<0 && x2>0 && y2<0)
     printf("The poins fall on the same axis");

    else if(x1<0 && y1>0 && x2<0 && y2>0)
     printf("The points fall on the same axis");

    else if(x1<0 && y1<0 && x2<0 && y2<0)
     printf("The points fall on the same axis");

    else
     printf("The points do not fall on the same axis");

    return 0;     



}