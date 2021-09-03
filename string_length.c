#include <stdio.h>
int main() {


    char str[1110] ;
    int i;

    printf("Enter String: \n");
    gets(str);

    for (i = 0; str[i] != '\0'; ++i);

    printf("Length of the string: %d", i);
    return 0;
}
