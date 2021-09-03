#include <stdio.h>
int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);


    printf("Enter string s2: ");
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("After copying the String s2: %s", s2);
    return 0;
}
