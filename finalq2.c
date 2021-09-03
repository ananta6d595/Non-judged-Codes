/*Develop a function to display the following output in the same order (you must
have to provide a logic using string).
Input : abc
Output : a ab abc ac b bc c*/

#include<stdio.h>


    void generate(char st, char s)
    {
        if (s.strlen() == 0) {
            return;
        }

        // If current string is not already present.
        if (st!= s) {
            st = s;

            // Traverse current string, one by one
            // remove every character and recur.
            for (int i = 0; i < s.strlen(); i++) {
                char t = s;
                if(i==1)
                t = '\0'
                generate(st, t);
            }
        }
    }


int main()
{
    char str[100];
    int i, wrd;

       printf("Input the string : ");
       fgets(str, sizeof str, stdin);

    i = 0;
    wrd = 1;

    /* loop till end of string */
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }
        i++;
    }
    // Driver code
        generate(str, s);
        for (int i=0; i<wrd; i++) {
            printf(str);
        }

        return 0;
    }
