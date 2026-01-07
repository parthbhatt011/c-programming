//Take a character and check if it’s a vowel or consonant.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (!isalpha(ch)) {
        printf("Invalid input. Please enter an alphabet.\n");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    else {
        printf("Consonant\n");
    }

    return 0;
}
