#include<stdio.h>
#include <string.h>

int main()
{

    char x[1000], fnam[100];

    int i,j, count=0, ch=0;
    FILE *fp;
    printf("Input the file name to be opened :");
    scanf("%s",fnam);

    fp = fopen(fnam, "r");
    if(fp == NULL){
        printf("File does not exists\n");
    }
    else{
    printf("The contents of the file %s are:\n", fnam);
    while(fgets(x, sizeof(x), fp) != NULL)
    {
        printf("%s", x);
        for(i=0; i<strlen(x); i++)
        {
            if((x[i]==' ' && x[i+1] != ' ')|| x[i] =='\t'&& x[i+1] != '\t' || x[i] == '\n'&& x[i+1] != '\n'){
                count++;
                ch++;
            }
            else
                ch++;


        }

    }





    printf("\nThe number of words in the file test.txt are : %d\n", count);
    printf("The number of characters in the file test.txt are : %d\n", (ch-1));

    fclose(fp);
    }

    return 0;
}
