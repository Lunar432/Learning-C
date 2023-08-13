#include <stdio.h>

//multiplication ot two matrices

int main()
{   
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter matrix A: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nShow matrix A: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter matrix B: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nShow matrix B: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }

//multiplying two matrices

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           c[i][j]=0;
           for(k=0;k<3;k++)
           {
            c[i][j]+=(a[i][k]*b[k][j]);
           }
            
        }
    }

    printf("\nProduct of matrix A and B is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}