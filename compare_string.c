#include <stdio.h>
#include <string.h>

int main() {
   char str1[100], str2[100];
   int i;

   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);

   i = 0;
   // while s1 is equal to s2
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 is greater than str2");
   else if (str1[i] < str2[i])
      printf("str1 is less than str2");
   else
      printf("str1 is equal to str2");

   return 0;
}

/*
1. str1>str2 when ascii value of str1 is greater than str2.
example: abcd > abCd. here ascii value of c is 99 and C is 67.

2. str2<str1 similar way as previous but reverse value.

3. str1 = str2 when both are same ascii value.
*/
