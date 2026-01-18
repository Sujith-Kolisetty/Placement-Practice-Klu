#include <stdio.h>
int main() {
    char ch;
    scanf(" %c",&ch);
    switch(ch){
        case 'A'...'Z': printf("Uppercase"); break;
        case 'a'...'z': printf("Lowercase"); break;
        case '0'...'9': printf("Digit"); break;
        default: printf("Special Character");
    }
    return 0;
}
