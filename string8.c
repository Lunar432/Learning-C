#include <stdio.h>
#include <string.h>
#include <curses.h>

//count total number of vowels and consonants in a string

int main()
{
    int vow=0,cons=0,i,len;
    char str[50];
    printf("Enter string: ");
    fgets(str,50,stdin);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vow++;
        }
         
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]>='Z'))
        {
            cons++;
        } 
    }
    printf("\nNumber of vowels in string: %d",vow);
    printf("\nNumber of consonants in string: %d",cons);
    return 0;
}