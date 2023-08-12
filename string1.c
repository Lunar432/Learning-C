#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50],str2[50];
    printf("Enter two names: ");
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);

    if(strcmp(str1,str2)==0)
    {
        printf("The names are same");
    }

    else
    {
        printf("The names are not same");
    }
 
    return 0;
}

