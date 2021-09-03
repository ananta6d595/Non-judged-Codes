#include <stdio.h>

int main() {

int num, i;
char str[11]={0}, c;

FILE *fop, *fp;

fop = fopen("numbers.txt", "r");

if(fop == NULL)
{
    printf("Error!");
    return;
}

while((fscanf(fop, "%d ", &num)) == 1){
    str[num]++;
}

fclose(fop);

fp  = fopen ("output.txt", "w");

    if(fp == NULL)
    {
        printf("Error!");
        return -1;
    }
for(i=1; i<=10; i++){
    fprintf(fp, "Number of %d responses: %d\n", i, str[i]);

}
    fclose(fp);


return 0;
}
