
#include <stdio.h>
#include <string.h>

int main() {
   char s1[] = "Beauty is in the eye of the beholder";
   char s2[] = "the";

   int n = 0;
   int m = 0;
   int times = 0, wrd=1 , location;
   int len = strlen(s2);

   while(s1[n] != '\0') {

      if(s1[n] == s2[m]) {

         while(s1[n] == s2[m]  && s1[n] !='\0') {
            n++;
            m++;


         }

         if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {

            location = wrd;
            if(location == 1)
            printf("The searched word \"%s\" is located at %dst position in sentence\n", s2, location);
            else if(location == 2)
            printf("The searched word \"%s\" is located at %dnd position in sentence\n", s2, location);
            else if(location == 3)
            printf("The searched word \"%s\" is located at %drd position in sentence\n", s2, location);
            else
            printf("The searched word \"%s\" is located at %dth position in sentence\n", s2, location);

         }
      } else {            // if first character of search string DOES NOT match
         while(s1[n] != ' ') {        // Skip to next word
            n++;
            if(s1[n] == '\0')
            break;
         }
      }
            if(s1[n]==' ' || s1[n]=='\n' || s1[n]=='\t')
            {
                wrd++;
            }
      n++;
      m=0;

   }

   return 0;
}
