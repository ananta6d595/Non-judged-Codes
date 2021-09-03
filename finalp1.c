#include<stdio.h>
#include<string.h>

int main(){
   int i,j, wrd;;
   char *str, temp[25];

   str = (*char)malloc( 50 * sizeof(char) );

   if( str == NULL )
    {
    printf("Could not able to allocate requested memory\n");
    }
    else
    {
        printf("Input the string : ");
        fgets(str, sizeof str, stdin);
    }

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;  // count words
        }
        i++;
    }

   for(i=0;i<=wrd;i++)
      for(j=i+1;j<=wrd;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }

   printf("Order of Sorted Strings:");
   for(i=0;i<=wrd;i++)
    puts(str[i]);


   return 0;
}
