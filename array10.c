#include <stdio.h>

//copy the elements of one array into another array

int main()
{
    int arr1[5],arr2[5];
    int i,j;
    printf("Enter elements of array: \n");
    for(i=0;i<5;i++)
    {
        printf("\nElement-%d: ",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\nElements of input array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nElements of copied array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr2[i]); 
    }
    return 0;
}