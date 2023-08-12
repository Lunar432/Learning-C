#include <stdio.h>

//Convert decimal to hexadecimal

int main()
{
    int d,r,a=0,b;
    char hexa[100];
    printf("Enter value in decimal: \n");
    scanf("%d",&d);
    while(d!=0)
    {
        r=d%16;
        d=d/16;
        if(r<10)
        {
         r= r+ 48;}
        else
        {
         r= r+ 55;} 
        hexa[a++]=r;

    }
    printf("Hexadecimal value is: ");
    b=a-1;
    while(b>=0)
    {
        printf("%c",hexa[b]);
        b--;
    }
    return 0;
}