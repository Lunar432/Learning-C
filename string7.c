#include <stdio.h>
#include <string.h>

//find name in a given string

int main()
{
    char line[]="Hello, nice to meet you Adiba.";
    char name[50];
    int a,d,count,namelen,linelen;
    printf("\nEnter your name: ");
    scanf("%s",name);
    line[strcspn(line, "\n")] = '\0';  
    namelen=strlen(name);
    linelen=strlen(line);
    d=linelen-namelen;
    printf("\nName found in string: ");    
    for(a=0;a<d;a++)
    {
       if(strncmp(&line[a],name,namelen)==0)
       {
        printf("%s",name);
        printf("\nIndex of name: %d",a+1);
        break;
       }
    }
    
}