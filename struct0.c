#include <stdio.h>
#include <string.h>

//structure of student information

struct student
{
    char name[100];
    int id;
    int age;
};

int main()
{   int i;
    struct student std[3];
    for(i=0;i<3;i++)
    {   printf("Enter student name: \n");
        scanf("%s",std[i].name);
        printf("Enter Id no: \n");
        scanf("%d",&std[i].id);
        printf("Enter age: \n");
        scanf("%d",&std[i].age);
    }

    for(i=0;i<3;i++)
    {   
        printf("\nStudent name is: ");
        printf("%s",std[i].name);
        printf("\nStudent Id is: ");
        printf("%d",std[i].id);
        printf("\nAStudent age: ");
        printf("%d",std[i].age);
    }
    return 0;
}