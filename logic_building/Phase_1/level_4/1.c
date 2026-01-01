//Take a character and check if it is a letter, a digit, or neither.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character is a LETTER.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a DIGIT.\n");
    }
    else {
        printf("The character is NEITHER a letter nor a digit.\n");
    }

    return 0;
}
