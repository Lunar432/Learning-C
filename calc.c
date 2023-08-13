#include <stdio.h>

//calculator using switch case

int main()
{
    int a,b;
    char choice;
    printf("Enter your choice(+,-,*,/): ");
    scanf("%c",&choice);
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case '+':
        printf("Result is: %d\n",a+b);
        break;

        case '-':
        printf("Result is: %d\n",a-b);
        break;

        case '*':
        printf("Result is: %d\n",a*b);

        case '/':
        printf("Result is: %d\n",a/b);

        default:
        printf("No choice!!");
    
     }
     return 0;

}