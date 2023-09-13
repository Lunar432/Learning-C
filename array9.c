#include <stdio.h>

//count the frequency of each element in array

int main()
{
    int count,n,i,j,fr[100],arr[100];

    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element-%d: ",i);
        scanf("%d",&arr[i]);
        fr[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
            count++;
            fr[j]=0;
          }
        }
        if(fr[i]!=0)
          {
            fr[i]=count;
          }

    }
    printf("\nFrequency of all elements: ");
    for(i=0;i<n;i++)
    {
       if(fr[i]!=0)
       { printf("%d element occurs %d times",arr[i],fr[i]);
         printf("\n");
       }
    }

}