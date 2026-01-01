//Check whether a number is a perfect square (WITHOUT sqrt)

#include <stdio.h>

int main() {
    int n, i;
    int isPerfect = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers cannot be perfect squares\n");
        return 0;
    }

    for (i = 0; i * i <= n; i++) {
        if (i * i == n) {
            isPerfect = 1;
            break;
        }
    }

    if (isPerfect)
        printf("%d is a perfect square\n", n);
    else
        printf("%d is not a perfect square\n", n);

    return 0;
}
