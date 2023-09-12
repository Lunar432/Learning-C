#include <stdio.h>

int main()
{
    int arr[]={34,12,21,54,48};
    int largest= *arr;
    for(int a=0;a<5;a++)
    {
       if(largest<*(arr+a))
       { largest=*(arr+a);}
    }
    printf("Largest number is: %d",largest);
    printf("\n%p",(arr+2));
    return 0;
}