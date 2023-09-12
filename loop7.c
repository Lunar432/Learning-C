#include <stdio.h>

//display a pattern like a right angled triangle 

int main()
{
    int i,j,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;

}