#include <stdio.h>
#include <string.h>

int main() {
   char s[1000];
   char s1[1000];
   char s2[1000];
   int i;

   printf("\nEnter a string : ");
   gets(s);

    strcpy(s1,s);  //copy
    strcpy(s2,s); //copy

    for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s1[i] = s[i] + 32;
        }
    }

    for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s2[i] = s[i] - 32;
      }
   }

   printf("\nString in Lower Case = %s", s1);
    printf("\nString in Upper Case = %s\n", s2);

   return 0;
}
