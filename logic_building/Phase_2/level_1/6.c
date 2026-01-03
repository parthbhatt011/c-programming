//Print the sum of first n natural numbers

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
