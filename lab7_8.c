#include<stdio.h>

struct s
{
char name[50];
int roll;
};

int main()
{
struct s a[5],b[5];
FILE *fptr;
int i;
fptr = fopen("file.txt","wb");

for(i=0 ; i<2 ; ++i)
{

    fflush(stdin);
    printf(" name = ");
    gets(a[i].name);
    printf(" roll_no = ");
    scanf(" %d",&a[i].roll);
}

fwrite(a,sizeof(a),1,fptr);
fclose(fptr);

fptr= fopen("file.txt","rb");
fread(b,sizeof(b),1,fptr);

for(i=0 ; i<2 ; ++i)
{

printf("\n Name : %s \n Roll : %d",b[i].name, b[i].roll);

}

fclose(fptr);

}
