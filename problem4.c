#include <stdio.h>

//Check if any student got full marks

int main()
{
    int marks[50],a,n,count=0;
    printf("Enter number of students: \n");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        printf("Enter marks: \n");
        scanf("%d",&marks[a]);
    }
    for(a=0;a<n;a++)
    {
        if(marks[a]>=30)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}