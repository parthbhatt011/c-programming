//Password Validation (Length ≥ 8 and At Least One Digit)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];
    int hasDigit = 0;

    printf("Enter password: ");
    scanf("%s", password);

    if (strlen(password) < 8) {
        printf("Invalid Password: Must be at least 8 characters long.\n");
        return 0;
    }

    for (int i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) {
            hasDigit = 1;
            break;
        }
    }

    if (hasDigit)
        printf("Password is Valid.\n");
    else
        printf("Invalid Password: Must contain at least one digit.\n");

    return 0;
}
