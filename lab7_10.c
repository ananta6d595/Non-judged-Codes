#include <stdio.h>

int main() {

FILE *fp, *fop;
fp  = fopen ("datasize.dat", "w");

if(fp == NULL)
{
    printf("Error!");
    return;
}
    printf("File Successfully created\n");

    fprintf(fp, "Data type\t\t\tSize\n");


    fprintf(fp,"char\t\t\t\t %i\n",sizeof( char));
    fprintf(fp,"unsigned char\t\t %i\n",sizeof(unsigned char));
    fprintf(fp,"short int\t\t\t %i\n",sizeof(short int));
    fprintf(fp,"unsigned short int\t %i\n",sizeof(unsigned short int));
    fprintf(fp," int\t\t\t\t %i\n",sizeof(int));
    fprintf(fp,"unsigned  int\t\t %i\n",sizeof(unsigned int));
    fprintf(fp,"long int\t\t\t %i\n",sizeof(long int));
    fprintf(fp,"unsigned long int\t %i\n",sizeof(unsigned long int));
    fprintf(fp,"float\t\t\t\t %i\n",sizeof(float));
    fprintf(fp,"double\t\t\t\t %i\n",sizeof(double));
    fprintf(fp,"long double\t\t\t %i\n",sizeof(long double));


    fclose(fp);


return 0;
}

