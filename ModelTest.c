#include<stdio.h>

void main()
{
    static int var =5;
    printf("%d", var--);
    if(var)
    printf("%d", var);

           // main();
}
