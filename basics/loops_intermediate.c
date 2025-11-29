#include <stdio.h>

int main() {

    // 1. Print sum of digits of a number
    int num, sum = 0;
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &num);
    int temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits of %d = %d\n\n", num, sum);


    // 2. Check if a number is Armstrong number
    int n, arm = 0, rem;
    printf("Enter a number to check Armstrong: ");
    scanf("%d", &n);
    int original = n;

    while (n > 0) {
        rem = n % 10;
        arm += rem * rem * rem;
        n /= 10;
    }

    if (arm == original)
        printf("%d is an Armstrong number\n\n", original);
    else
        printf("%d is NOT an Armstrong number\n\n", original);


    // 3. Count digits of a number
    int number, count = 0;
    printf("Enter a number to count digits: ");
    scanf("%d", &number);

    int temp2 = number;
    while (temp2 != 0) {
        temp2 /= 10;
        count++;
    }
    printf("Total digits in %d = %d\n\n", number, count);


    // 4. Print Fibonacci series
    int terms, a = 0, b = 1, next;
    printf("Enter number of Fibonacci terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= terms; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n\n");


    // 5. Nested Loop Pattern (Pyramid)
    int rows;
    printf("Enter rows for pyramid pattern: ");
    scanf("%d", &rows);

    printf("\nPyramid Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
