#include<stdio.h>
#include<string.h>

int main()
{
int num;
FILE *fp;
fp=fopen("Info.txt","w");
    if(fp==NULL)
        {
        printf("Sorry, file does not exist \n");
        }

    else
    {
        printf("File opened successfully. \n");
        printf("Enter integers : \n");
            while(num!=-1)
            {

            scanf("%d",&num);
            if(num == -1)
                break;
            fprintf(fp,"%d \n",num);
            }
    fclose(fp);
    }
}
