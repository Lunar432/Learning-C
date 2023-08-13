#include <stdio.h>
#include <string.h>

//use of strcat


int main() {
   char str1[100] = "Hello ", str2[] = "World";
   strcat(str1, str2);
   puts(str1);
   puts(str2);

   return 0;
}
