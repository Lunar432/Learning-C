#include <stdio.h>

//Calculate number of teenagers among students

int main()
{
   int age[50],n,a=0,count=0;
   printf("Enter number of students in class: \n");
   scanf("%d",&n);
   while(a<n)
   {
    printf("Enter age: \n");
    scanf("%d",&age[a]);
    if(age[a]>10 && age[a]<20)
      {
        count++;
      }
    a++;
   }
   printf("Number of teenagers is:%d \n ",count);
   return 0;
}