#include <stdio.h>

//Check which grades are achieved by most students

int main()
{
    int marks[50],n,a,i,count1,count2,count3,count4;
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
        if(marks[a]>=90 && marks[a]<100)
             count1++;
        else if(marks[a]>=80 && marks[a]<90)
             count2++;
        else if(marks[a]>=70 && marks[a]<80)
             count3++;
        else if(marks[a]>=60 && marks[a]<70) 
             count4++; 
    }
    if(count1>count2 && count1>count3 && count1>count4)
        printf("\nA");
    else if(count2>count1 && count2>count3 && count2>count4)
        printf("\nB");
    else if(count3>count1 && count3>count2 && count3>count4)
        printf("\nC");
    else if(count4>count1 && count4>count2 && count4>count3)
        printf("\nD");
    
    return 0;

}