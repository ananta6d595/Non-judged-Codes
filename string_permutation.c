#include <stdio.h>
#include <string.h>


int len;
char str[100];

int main()
{
    int mid;
    int flag=1;
    int giga=0;
    int dead=0;
    int array[50];

    printf("Enter the string : ");
    fgets(str, sizeof str, stdin);
    len= strlen(str)-1;
            printf("String length = %d\n",len);
                printf("Total permutation = %d\n",len*(len-1));

    for(int cnum=0;cnum<len;cnum++)
    {
            for(int i=0;i<len-1;i++)
            {
                array[50]=0;
//printf("%d : ",array[1]);
                dead=0;
                for(int j=cnum;j<len+cnum;j++)
                {
                    mid=j%len;
                    if(mid==cnum && flag==1)
                    {
                        printf("%c", str[mid]);
                        array[dead]=mid;
                        dead++;
                        flag=0;
                    }
                        else
                    {
                        giga=(i+j)%len;
                        for(int k=0;k<dead;k++)
                        {
                            if((array[k]==giga) && flag==0)
                            {
                            giga=(giga+1)%len;
                            }
                        }
                        printf("%c",str[giga]);
                        array[dead]=giga;
                        dead++;
                    }
                }
                printf("\n");
                flag=1;
            }
    }
return 0;
}
