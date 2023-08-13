#include <stdio.h>
#include <string.h>

//use of strcpy

int main()
{
    char str1[50],str2[50];
    printf("Enter name: ");
    fgets(str2,sizeof(str2),stdin);
    strcpy(str1,str2);
    puts(str1);
    return 0;
}