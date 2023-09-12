#include <stdio.h>

//use pointer to pass value and address

int main()
{
    double salary;
    double* ptr;
    printf("\nSalary: ");
    scanf("%lf",&salary);
    ptr= &salary;
    printf("%lf",*ptr);
    return 0;

}