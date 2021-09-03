#include<stdio.h>
#include<string.h>

int main()
{
    char  buf[1000], ch;
    int record, quan;
    float cost;

    FILE *fp;

    fp = fopen("hardware.dat", "a");
    if(fp==NULL){
        printf("File not found.\n");
        return;
    }
    else{
        printf("File opened successfully.\n\n");

        fprintf(fp, "Record #\t\t Tools name \t\t Quantity\t\t Cost \n  ");

        while(1)
        {
        printf("\nEnter record: ");
        scanf("%d", &record);

        if(record == -1) break;
        getchar();

        printf("Enter tools name: ");
        scanf("%[^\n]%*c", buf);
        printf("Enter tools quantity: ");
        scanf("%d", &quan );
        printf("Enter cost: ");
        scanf("%f", &cost );

        fprintf(fp, "\n   %d\t\t\t %s \t\t\t\t  %d \t\t\t\t%.2f", record, buf, quan, cost);

        }
    }

    printf("File Written Successfully.");

    return 0;
}
