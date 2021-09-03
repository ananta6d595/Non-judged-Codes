#include <stdio.h>

int main() {

int num, i, tra;
char str[19];
int bal, line =1;

FILE *fp, *fop;
fp  = fopen ("oldMast.dat", "w");

if(fp == NULL)
{
    printf("Error!");
    return;
}
    printf("Enter Master data\n");

    fprintf(fp, "Master file\nAccount number       Name           balance\n");

for(i=0; i<line; i++){
    printf("Enter account number: ");
    scanf("%d", &num);
    getchar();
    printf("Enter name: ");
    scanf("%[^\n]%*c", str);

    printf("Enter balance: ");
    scanf("%d", &bal);

    fprintf(fp, "%-12d %8s %12d\n", num, str,bal);
}
    fclose(fp);


    printf("Enter Transaction data\n");
fop  = fopen ("trans.dat", "w"); ///transaction

if(fop == NULL)
{
    printf("Error!");
    return;
}

    fprintf(fop, "Transaction file\nAccount \nnumber        \t      Transaction amount\n");

for(i=0; i<line; i++){
    printf("Enter account number: ");
    scanf("%d", &num);

    printf("Enter balance: ");
    scanf("%d", &tra);

    fprintf(fp, "%-12d \t\t %12d\n", num,tra);
}
    fclose(fp);



return 0;
}
