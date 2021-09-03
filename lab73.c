
#include <stdio.h>
#include <string.h>
int main ()
{
char name [1000];
FILE *fp;
fp=fopen("ToDoList.txt","w");
if (fp==NULL)
{
 printf("File does not exist.\n");
}
 else
{

printf ("File opened successfully.\n");
printf ("Write What I Want To Do :  \n");
fgets (name,sizeof(name), stdin);
fprintf(fp,"%s",name);
fclose (fp);
}
}

