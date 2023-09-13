#include <stdio.h>
#include <math.h>

//print the square of array elements using function calling

void squarearr(int arr[6])
{
    int j,sqr[6];
    for(j=0;j<6;j++)
    {
        sqr[j]=(arr[j]*arr[j]);
    }
    printf("\nSquare array is: ");
    for(j=0;j<6;j++)
    {
    printf("%d ",sqr[j]);
    }
}

int main()
{   int i,arr[6];
    printf("Enter input of array: \n");
    for(i=0;i<6;i++)
    {
        scanf("%d ",&arr[i]);
    }
    squarearr(arr);
    return 0;

}