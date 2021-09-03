#include <stdio.h>


int main() {

int num, i;
char str[19], c;

FILE *fp, *fop;

    fp  = fopen ("numbers.txt", "w");

    if(fp == NULL)
    {
        printf("Error!");
        return;
    }

for(;num!=-1;){
        printf("Enter number between 1-10: ");
        scanf("%d", &num);

        fprintf(fp, "%d ", num);
}
    fclose(fp);

return 0;
}
