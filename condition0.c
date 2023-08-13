#include <stdio.h>

int main()
{
    float marks;
    char grade;
    printf("Enter marks:");
    scanf("%f",&marks);
    if(marks>=90 && marks<=100)
     printf("Result is Grade A");
    else if(marks>=80 && marks<=89)
     printf("Result is Grade B");
    else if(marks>=70 && marks<=79)
     printf("Result is Grade C");
    else if(marks>=60 && marks<=69)
     printf("Result is Grade D");
    else if(marks<60)
     printf("Result is Grade F");
    else
     printf("Error!");
    return 0;     
     
}
