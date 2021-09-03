#include<stdio.h>

int main()
{

    int a[1000]= {0}, i=0, j, count=0, value, temp;

    FILE *fp;

    fp = fopen("numbers.txt","r");

    if(fp==NULL){
        printf("File not found.\n");
        return;
    }
    else{

    printf("Unsorted:\n");
   while (!feof (fp) && fscanf (fp, "%d ", &value) && i++ < 1000 ){
    a[i] = value;

    count++;
    printf("%d\n", a[i]);

   }

    }

    printf("\n\nSorted\n");
    for(i=0; i<count; i++){
        for(j=i+1; j<count; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0; i<count-1; i++){
        printf("%d\n", a[i]);
    }

    return 0;

}
