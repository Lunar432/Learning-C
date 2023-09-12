#include <stdio.h>

//find maximum number and its position from array

int main()
{
    int a[100],max,pos,i;
    printf("Enter number: \n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<100;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos=i+1;
        }
    }
    printf("Highest value: %d\n",max);
    printf("Position(index) of this value: %d",pos);
    return 0;
}
