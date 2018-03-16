#include <stdio.h>
//#include<conio.h>
#include <string.h>
int main()
{
   char e[100], f[100];
   printf("Enter a string \n");
   scanf("%s",&e);
   strcpy(f,e);
   strrev(f);
   if (strcmp(e,f) == 0)
   {
      printf("Entered string is a palindrome.\n");
   }
   else
   {
      printf("Entered string is not a palindrome.\n");
   }
 
   return 0;
}
