
#include<stdio.h>
#include<string.h>
int main()
{
int num1, num2, num3, num4, num5 ,sum=0;
FILE *fp;
fp=fopen("Info.txt","w");
if(fp==NULL)
{
printf("File does not exist. \n");
}

else
{
printf("File opened successfully. \n");
printf("Enter five numbers: ");

scanf("%d %d %d %d %d",&num1, &num2, &num3, &num4, &num5);
sum= num1+num2+num3+num4+num5;

fprintf (fp,"%d %d %d %d %d       %d", num1, num2, num3, num4, num5, sum);
fclose(fp);
}

}
