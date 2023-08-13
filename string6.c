#include <stdio.h>
#include <string.h>

//concatenate two strings without strcat

void concatenatestring(char dest[],const char src[])
{   
    int i=0,j=0;
    while(dest[i]!='\0')
    {
        i++;
    }
    while(src[j]!='\0')
    {
        dest[i]=src[j];
        i++;
        j++;
    }
    dest[i]='\0';
}

int main()
{
    char str1[50],str2[50];
    printf("Enter first name: \n");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter last name: \n");
    fgets(str2,sizeof(str2),stdin);
    concatenatestring(str1,str2);
    puts(str1);
    return 0;

}