#include<stdio.h>

struct cars{
char name[100];
char model[100];
int year;
double price;

};


int main()
{

    struct cars carl;
    char ch;

    FILE *fp= fopen("cars.txt", "w");

    printf("Enter car details:\n\n");
    printf("Car Name: ");
    gets(carl.name);
    fprintf(fp, "Car Name: %s\n", carl.name);

    printf("Car Model: ");
    gets(carl.model);
    fprintf(fp, "Car Model: %s\n", carl.model);

    printf("Year: ");
    scanf("%d", &carl.year);
    fprintf(fp, "Year: %d\n", carl.year);

    printf("Price(usd): ");
    scanf("%lf", &carl.price);
    fprintf(fp, "Price: %.2lf\n", carl.price);


    fclose(fp);

    printf("file has been written :\n");
    printf("Now reading the file in console:\n\n");

    fp = fopen("cars.txt", "r");

    while(!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    return 0;
}
