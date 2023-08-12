#include <stdio.h>
#include <string.h>

int main()
{   
    int i;
    char str1[100]="Hello World";
    char str2[100];

    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    puts(str2);
    return 0;
}