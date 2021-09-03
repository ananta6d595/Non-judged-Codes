#include <stdio.h>

int main() {

int num, i;
char str[19], c;
int bal, line =3;

FILE *fp, *fop;
fp  = fopen ("account_data.txt", "w");

if(fp == NULL)
{
    printf("Error!");
    return;
}

    fprintf(fp, "Account number     Name    balance\n");

for(i=0; i<line; i++){
    printf("Enter account number: ");
    scanf("%d", &num);
    getchar();

    printf("Enter name: ");
    scanf("%[^\n]%*c", str);

    printf("Enter balance: ");
    scanf("%d", &bal);

    fprintf(fp, "  %d\t\%s \t%d\n", num, str,bal);
}
    fclose(fp);

fop = fopen("account_data.txt", "r");

if(fop == NULL)
{
    printf("Error!");
    return;
}

for (c = fgetc(fop); c != EOF; c = fgetc(fop)){
printf("%c",c );

}

return 0;
}
