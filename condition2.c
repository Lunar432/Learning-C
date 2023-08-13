#include <stdio.h>
#include <string.h>

//Rock,paper,scissors game

int main()
{
    int a,b,c;
    printf("1.Rock\n");
    printf("2.Paper\n");
    printf("3.Scissor\n");
    printf("Enter first move: \n");
    scanf("%d",&a);
    printf("Enter 2nd move: \n");
    scanf("%d",&b);
    printf("\n");
    if(a==1 && b==2)
    {
        printf("\nSecond move wins");
    }
    else if(a==2 && b==1)
    {
        printf("\nFirst move wins");
    }
    else if(a==3 && b==2)
    {
        printf("\nFirst move wins");
    }
    else if(a==2 && b==3)
    {
        printf("\nSecond move wins");
    }
    else if(a==1 && b==3)
    {
        printf("\nFirst move wins");
    }
    else if(a==3 && b==1)
    {
        printf("\nSecond move wins");
    }
    else
    printf("Error!!");

    return 0;
}