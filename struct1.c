#include <stdio.h>
#include <string.h>

//structure of employee information

struct employee
{
    char name[100];
    int age;
    float salary;
};

int main()
{
    int i;
    struct employee emp[4];

    for(i=0;i<4;i++)
    {   
        printf("\nEnter name of employee: ");
        fgets(emp[i].name,sizeof(emp[i].name),stdin);
        size_t len = strlen(emp[i].name);
        if (len > 0 && emp[i].name[len - 1] == '\n')
        {
            emp[i].name[len - 1] = '\0';
        }

        printf("\nEnter age of employee: ");
        scanf("%d",&emp[i].age);
        getchar();
        printf("\nEnter salary of employee: ");
        scanf("%f",&emp[i].salary);
        getchar();
        
    }

    for(i=0;i<4;i++)
    {
        printf("\n\nName:");
        puts(emp[i].name);
        printf("Age: ");
        printf("%d",emp[i].age);
        printf("\nSalary: ");
        printf("%f",emp[i].salary);
    }
    return 0;
}