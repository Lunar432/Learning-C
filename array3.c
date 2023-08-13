#include <stdio.h>

//2D arrays

int main()
{   int a[3][3],b[3][3],i,j;
    printf("Enter input of matrix A: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            printf("element- a[%d][%d]:  ",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    printf("Show of matrix A: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d   ",a[i][j]);

        }
        printf(" \n");
    }

    return 0;

}