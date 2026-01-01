//Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.

#include <stdio.h>

int main() {
    int n, first, middle, last;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Invalid input. Enter a 3-digit number.\n");
        return 0;
    }

    last = n % 10;
    middle = (n / 10) % 10;
    first = n / 100;

    if (first + last == middle)
        printf("Condition satisfied: %d + %d = %d\n", first, last, middle);
    else
        printf("Condition NOT satisfied: %d + %d != %d\n", first, last, middle);

    return 0;
}
