 #include <stdio.h>

//Convert decimal to hexadecimal using recursion

void printhexa(char hexa[],int c)
{   if(c>=0)
    {
        printf("%c",hexa[c]);
        printhexa(hexa,c-1);
    }
}

void Decitohexa(int d,char hexa[],int c)
{    
    int r;
    if(d>0)
    {   r=d%16;
        d=d/16;
        if(r<10)
        {r=r+48;}
        else
        {r=r+55;}
        hexa[c++]=r;
        Decitohexa(d,hexa,c);
    }
    else
    printhexa(hexa,c-1);
}

int main()
{
    int a,c=0;
    char hexa[100];
    printf("Enter value in decimal:");
    scanf("%d",&a);
    printf("Value in hexadecimal is: ");
    Decitohexa(a,hexa,c);
    return 0;
}