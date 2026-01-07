//Print the sum of all odd numbers up to n

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of odd numbers up to %d = %d", n, sum);

    return 0;
}
