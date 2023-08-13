#include <stdio.h>

//calculate string length without strlen

int main()
{
    char str[50];
    int a,value=0;
    printf("Enter: \n");
    fgets(str,sizeof(str),stdin);
    for(a=0;str[a]!='\0';a++)
    {
        value=a;
    }
    printf("Length of string is %d",value);
    return 0;
}