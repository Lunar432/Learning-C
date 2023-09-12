#include <stdio.h>

//Check which grades are achieved by most students alt

int main()
{
    int marks[50],a,n,count1,count2,count3,count4;
    count1=count2=count3=count4=0;
    printf("Enter number of students: \n");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        printf("Enter marks: \n");
        scanf("%d",&marks[a]);
    }
    for(a=0;a<n;a++)
    {
        if(marks[a]>=90 && marks[a]<=100)
        count1++;
        else if(marks[a]>=80 && marks[a]<90)
        count2++;
        else if(marks[a]>=70 && marks[a]<80)
        count3++;
        else if(marks[a]>=60 && marks[a]<70)
        count4++;
    }
    int maxcount=count1;
    char maxgrade='A';
    if(count2>maxcount)
    {
        maxcount=count2;
        maxgrade='B';
    }
    if(count3>maxcount)
    {
        maxcount=count3;
        maxgrade='C';
    }
    if(count4>maxcount)
    {
        maxcount=count4;
        maxgrade='D';
    }
    printf("\nGrades achieved by most students is: %c",maxgrade);
    return 0;
}