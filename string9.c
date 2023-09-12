#include <stdio.h>
#include <string.h>

//sort a string in ascending order

int main()
{
    char str[100],ch;
    int len,i,j;
    printf("Enter string: ");
    fgets(str,100,stdin);
    len = strlen(str);
    for(i=1;i<len;i++)
    {
        for(j=0;j<len-1;j++)
        {
            if(str[j]>str[j+1])
            {
                ch=str[j];
                str[j]=str[j+1];
                str[j+1]=ch;
            }
        }
    }
    printf("String after sorting: %s",str);
    return 0;
}