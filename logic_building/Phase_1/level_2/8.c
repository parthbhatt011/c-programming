//Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'm')
        printf("The character lies between 'a' and 'm'.\n");
    else if (ch >= 'n' && ch <= 'z')
        printf("The character lies between 'n' and 'z'.\n");
    else if (ch >= 'A' && ch <= 'M')
        printf("The character lies between 'A' and 'M'.\n");
    else if (ch >= 'N' && ch <= 'Z')
        printf("The character lies between 'N' and 'Z'.\n");
    else
        printf("Not an alphabet character.\n");

    return 0;
}
