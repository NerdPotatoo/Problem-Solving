#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char sentence[1000];
    int count = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i < strlen(sentence); i++) {
        char c = tolower(sentence[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    printf("Number of vowels in the sentence: %d\n", count);

    return 0;
}
