#include <stdio.h>
#include <string.h>

//structure use for book informaton

struct book{
 char nam[20];
 int ch;
 float cost;
};

int main()
{   int i;
    struct book b[30];
    for(i=0;i<4;i++)
    {
    printf("Enter book name: \n");    
    scanf("%s",b[i].nam);
    printf("Enter book chapter: \n");
    scanf("%d",&b[i].ch);
    printf("Enter book cost:\n");
    scanf("%f",&b[i].cost);
    }
    printf("You have entered the following information\n");
    for(i=0;i<4;i++)
   {printf("Book name: %s\n",b[i].nam);
    printf("Book chapter: %d\n",b[i].ch);
    printf("Book cost: %.2f\n",b[i].cost);
   }
    return 0;

    


}
