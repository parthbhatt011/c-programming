//Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits.

#include <stdio.h>

int main() {
    int n, temp, digit;
    int sum = 0, product = 1;

    printf("Enter a number (1–9999): ");
    scanf("%d", &n);

    if (n < 1 || n > 9999) {
        printf("Invalid input. Enter a number between 1 and 9999.\n");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    if (sum > product)
        printf("Sum (%d) is greater than Product (%d)\n", sum, product);
    else
        printf("Sum (%d) is NOT greater than Product (%d)\n", sum, product);

    return 0;
}
