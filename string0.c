#include <stdio.h>

//Take name as input and turn 1st letter to X

int main()
{
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);
    name[0]= 'X';
    printf("%s ",name);
    return 0;
}