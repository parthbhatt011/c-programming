#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nArithmetic Operators:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %.2f\n", (float)a / b);
    printf("Modulus: %d\n", a % b);

    printf("\nRelational Operators:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    printf("\nLogical Operators:\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b > 0): %d\n", (a > 0 || b > 0));
    printf("!(a > b): %d\n", !(a > b));

    return 0;
}
