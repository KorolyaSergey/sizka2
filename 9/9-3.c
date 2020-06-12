#include <stdio.h>
#include <string.h>

int counting(char *s, char symbol) {
    int count = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] == symbol) {
            count++;
        }
    }
    return count;
}

int main() {
    char *s1 = "counts the number of words in the text that begin with a vowel and displays all words that have an odd number of consonants";
    printf("\nEnter symbol: ");
    char tmp;
    scanf("%c", &tmp);
    printf("\nIn sting: %s\n%d sySmbols %c", s1, counting(s1, tmp), tmp);
    return 0;
}