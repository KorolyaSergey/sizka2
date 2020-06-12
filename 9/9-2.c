#include <stdio.h>
#include <string.h>
#include <ctype.h>
int counting(char * s){
    int countVowel  = 0, count;
    for (int i = 0, d = 0; s[i] != '\0'; ++i, d++) {
        count = 0;
        if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i'|| tolower(s[i]) == 'o' || tolower(s[i]) == 'u'){
            for (int j = i; s[j] != ' ' && s[j] != ',' && s[j] != '.'; ++j) {
                count++;
                i = j+1;
            }
            if (count%2!=0){
                for (int j = d; j < i; ++j) {
                    putchar(s[j]);
                }
                d = i;
            }
            countVowel++;
        } else{
            for (int j = i; s[j] != ' ' && s[j] != ',' && s[j] != '.'; ++j) {
                count++;
                i = j+1;
            }
            if (count%2!=0){
                for (int j = d; j < i; ++j) {
                    putchar(s[j]);
                }
                d = i;
            }
        }

    }
    return countVowel;
}

int main() {
    char * s1 = "counts the number of words in the text that begin with a vowel and displays all words that have an odd number of consonants";
    printf("\n%d ", counting(s1));
    return 0;
}