#include <stdio.h>
int main() {
    char strl[150];
    int vowels, consonant;

    vowels = consonant = 0;

    printf("Enter a string: ");
    fgets(strl, sizeof(strl), stdin);

    for (int i = 0; strl[i] != '\0'; ++i) {
        if (strl[i] == 'a' || strl[i] == 'e' || strl[i] == 'i' ||
            strl[i] == 'o' || strl[i] == 'u' || strl[i] == 'A' ||
            strl[i] == 'E' || strl[i] == 'I' || strl[i] == 'O' ||
            strl[i] == 'U') {
            ++vowels;
        } else if ((strl[i] >= 'a' && strl[i] <= 'z') || (strl[i] >= 'A' && strl[i] <= 'Z')) {
            ++consonant;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    return 0;
}
