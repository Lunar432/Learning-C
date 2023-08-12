#include <stdio.h>

//one dimensional array using loops

int main()
{   int i,a[10];    
    printf("Enter input of array: \n");
    
    for(i=0;i<10;i++)
    { 
     scanf("%d",&a[i]);
    }
   

    printf("Show of the array: \n");
    i=0;
    while (i<10)
    {
        printf("%d\n",a[i]); 
        i++;
    }
   
    return 0;
}