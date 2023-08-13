#include <stdio.h>

//Sum of two matrix

int main()
{   int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter input of matrix A: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element-a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Show of matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d    ",a[i][j]);  
        }
        printf("\n");
    }

    printf("Enter input of matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element-b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Show of matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d    ",b[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrix A and B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
            printf("%d   ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}