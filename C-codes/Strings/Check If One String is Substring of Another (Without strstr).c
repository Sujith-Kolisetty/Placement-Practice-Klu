#include <stdio.h>

int main() {
    char text[200], pattern[100];
    int found = 0;

    printf("Enter main string: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter substring to search: ");
    fgets(pattern, sizeof(pattern), stdin);

    for(int i = 0; text[i] != '\0'; i++) {
        int j = 0;
        while(text[i + j] == pattern[j] && pattern[j] != '\0')
            j++;

        if(pattern[j] == '\0') {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Substring Found");
    else
        printf("Substring NOT Found");

    return 0;
}
