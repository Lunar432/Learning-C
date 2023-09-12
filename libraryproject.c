#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <string.h>

struct lib
{
   char bookname[50];
   char authr_name[50];
   char category[30];
   int pub_year;
   int avail; 
};

#include "project.h"


int main()
{
    struct lib l[100];
    char atr_name[30],catgry[30],book[30];
    uint8_t count=0;
    int pubyear,a=0,b=0;
    welcome_message();
    printf("\n\n                   LOGIN TO MANAGE BOOKS                   \n\n");
    int isLoggedIn=login();
    if(isLoggedIn)
    {
    while(b!=8)
    {printf("\n\n   1.Add book information ");
     printf("\n    2.Find book with book name");
     printf("\n    3.Find book with author name");
     printf("\n    4.Find book with category");
     printf("\n    5.Find book with publication year");
     printf("\n    6.List of all books in the library");
     printf("\n    7.Number of books in library ");
     printf("\n    8.Exit");
     printf("\n\nEnter choice: ");
     scanf("%d",&b);
     getchar();

     switch(b)
     {
      case 1:
      addbookinfo(&a,&count,l);
      break;

      case 2:
      findwithbook(count,book,l);
      break;

      case 3:
      findwithauthor(count,atr_name,l);
      break;

      case 4:
      findwithcateg(count,catgry,l);
      break;

      case 5:
      findwithpubyear(count,pubyear,l);
      break;

      case 6:
      listofbooks(count,l);
      break;

      case 7:
      booknum(count);
      break;

      case 8:
      return 0;

      default: 
      printf("\nNo matching choice!!");
     }
    }
    }
    return 0;

}
void welcome_message()
{
   int i,j;
   for(i=1;i<=7;i++)
   {
      for(j=1; j<25; j++)
      {
        if(i == 3)
        {
          printf("<~><~><~><~>                                                <~><~><~><~>");
          break;
        }

        else if(i == 4)
        {
          printf("<~><~><~><~>          LIBRARY MANAGEMENT SYSTEM             <~><~><~><~>");
          break;
        }
        else if (i == 5)
        {
          printf("<~><~><~><~>                                                <~><~><~><~>");
          break;
        }
        else
        {
          printf("<~>");

        }

      } 
      printf("\n");

    } 
    printf("\n");
}

int login()
{  
  char user[50],pass[50];
  printf("\n\nEnter user name: ");
  scanf("%s",user);
  if(strcmp(user,"Adiba")==0 || strcmp(user,"Habiba")==0)
  {
    printf("\nEnter password: ");
    scanf("%s",pass);
    if(strcmp(pass,"AMHO")==0)
    {
      printf("\n\nLogged in successfully!!");
      return 1;
    }
    else{
      printf("\n\nLog in unsuccessful!!");
      return 0;
    }
    
  }
  else{
  printf("Wrong username!!"); 
  return 0;
  }
}
void addbookinfo(int *a,uint8_t *count,struct lib l[100])
{    
      
      printf("\nEnter book name: ");
      fgets(l[*a].bookname,50,stdin);
      l[*a].bookname[strcspn(l[*a].bookname,"\n")]='\0';
      printf("\nEnter author name:");
      fgets(l[*a].authr_name,50,stdin);
      l[*a].authr_name[strcspn(l[*a].authr_name,"\n")]='\0';
      printf("\nEnter category:");
      fgets(l[*a].category,50,stdin);
      l[*a].category[strcspn(l[*a].category,"\n")]='\0';
      printf("\nEnter publishing year: ");
      scanf("%d",&l[*a].pub_year);
      printf("\nEnter number of available copies: ");
      scanf("%d",&l[*a].avail);
      (* count)++;
      (* a)++;
}

void findwithbook(uint8_t count,char book[50],struct lib l[100])
{ 
  int a,found;
  printf("\nEnter book name: ");
  fgets(book,50,stdin);
  book[strcspn(book,"\n")]='\0';
  if(count>0)
  {
  for(a=0;a<count;a++)
  {
    if(strcmp(book,l[a].bookname)==0)
    {
      printf("\nBook name: ");
      puts(l[a].bookname);
      printf("\nAuthor name:");
      puts(l[a].authr_name);
      printf("\nCategory: ");
      puts(l[a].category);
      printf("\nPublishing year: %d\nNumber of available copies: %d",l[a].pub_year,l[a].avail);
      found=1;
    }
   
  }
  if(found!=1)
  {
    printf("\nNo matching books found!!");
  }
  }
  else{
    printf("\nNo books found!!");
  }
}


void findwithauthor(uint8_t count,char atr_name[50],struct lib l[100])
{   
    int a,found;
    printf("\nEnter author name:");
    fgets(atr_name,50,stdin);
    atr_name[strcspn(atr_name,"\n")]='\0';
    if(count>0)
    {
    for(a=0;a<count;a++)
      { 
       if(strcmp(atr_name,l[a].authr_name)==0)
       {
        printf("\nBook name: "); 
        puts(l[a].bookname);
        printf("\nAuthor name: ");
        puts(l[a].authr_name); 
        printf("\nCategory: ");
        puts(l[a].category);
        printf("\nPublication year: %d\nNumber of available copies: %d\n",l[a].pub_year,l[a].avail);
        found=1;
       }
      }
      if(found!=1)
       {
        printf("\nNo matching books found!!");
       }
    }
    else{
    printf("\nNo books found!!");
    }
}

void findwithcateg(uint8_t count,char catgry[50],struct lib l[100])
{
    int a,found;
    printf("\nEnter category: ");
    fgets(catgry,50,stdin);
    catgry[strcspn(catgry,"\n")]='\0';
    if(count>0)
    {
    for(a=0;a<count;a++)
    {
       if(strcmp(catgry,l[a].category)==0)
       {
        printf("\nBook name: ");
        puts(l[a].bookname);
        printf("\nAuthor name: ");
        puts(l[a].authr_name);
        printf("\nCategory: ");
        puts(l[a].category);
        printf("\nPublication year: %d\nNumber of available copies: %d\n",l[a].pub_year,l[a].avail);
        found=1;
       }
    }
    if(found!=1)
       {
        printf("\nNo matching books found!!");
       }
    }
    else
    {  
      printf("\nNo books found!!");
    }
}

void findwithpubyear(uint8_t count,int pubyear,struct lib l[100])
{  int a,found;
   printf("\nEnter publication year:");
   scanf("%d",&pubyear);
   if(count>0)
   { 
    for(a=0;a<count;a++)
    {
      if(pubyear==l[a].pub_year)
      {
        printf("\nBook name: ");  
        puts(l[a].bookname);
        printf("\nAuthor name: ");
        puts(l[a].authr_name);
        printf("\nCategory: ");
        puts(l[a].category);
        printf("\nPublication year: %d\nNumber of available copies: %d\n",l[a].pub_year,l[a].avail);
        found=1;
      }
    }
    if(found!=1)
      {
        printf("\nNo matching books found!!");
      }
   }
   else{
    printf("\nNo books found!!");
   }
}

void listofbooks(uint8_t count,struct lib l[100])
{ 
  int a;
  if(count==0)
  {
    printf("\nNo books found!!");
  }
  else
  {
    printf("\nThe following information has been entered: ");
    for(a=0;a<count;a++)
    {
     printf("\nBook name: ");
     puts(l[a].bookname);
     printf("\nAuthor name: ");
     puts(l[a].authr_name);
     printf("\nCategory: ");
     puts(l[a].category);
     printf("\nPublishing year: %d\nNumber of available copies: %d",l[a].pub_year,l[a].avail);
   
    }
  }
}

void booknum(uint8_t count)
{
  printf("\nNumber of books in library: %d",count);
}
