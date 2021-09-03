#include <stdio.h>

int main()
{
int var = 456;
int *ptr2;  //pointer variable ptr2 declared. not *ptr2, OK?
ptr2 = &var;
// If we want to change value of var with pointer we can do this below
*ptr2 = 9999;
printf("var: %d", var); // 9999

return 0;
}
//https://www.geeksforgeeks.org/double-pointer-pointer-pointer-c/?ref=rp
