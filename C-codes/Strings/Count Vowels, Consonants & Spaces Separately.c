#include <stdio.h>
#include <ctype.h>

int main() {
    char str[300];
    int vowels = 0, consonants = 0, spaces = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if(ch == ' ')
            spaces++;
    }

    printf("Vowels = %d\nConsonants = %d\nSpaces = %d", vowels, consonants, spaces);
    return 0;
}
