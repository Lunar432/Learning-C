#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ages[4];
    int n=4;
    int* ptr;
    ptr=(int*)malloc(4*sizeof(int));

    for(int i=0;i<n;i++)
    {
       scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }

    ages[4]=5;
    ages[5]=6;
    int n=6;
    realloc(ptr,6*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d",ptr+i);
    }

}