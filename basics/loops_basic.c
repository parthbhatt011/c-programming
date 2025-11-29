#include <stdio.h>

int main() {

    // 1. Print numbers from 1 to 100
    printf("Numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 2. Print multiplication table of a number
    int num;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n");

    // 3. Sum of first N natural numbers
    int N, sum = 0;
    printf("Enter N to find sum of first N natural numbers: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d\n\n", N, sum);

    // 4. Factorial of a number
    int fact_num;
    long long factorial = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &fact_num);

    for (int i = 1; i <= fact_num; i++) {
        factorial *= i;
    }
    printf("Factorial of %d = %lld\n\n", fact_num, factorial);

    // 5. Reverse a number using loop
    int number, reversed = 0;
    printf("Enter a number to reverse: ");
    scanf("%d", &number);

    int original = number;

    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    printf("Reversed number of %d = %d\n", original, reversed);

    return 0;
}
