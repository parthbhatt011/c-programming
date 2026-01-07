//Take two numbers and check if both are positive and their sum is less than 100

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0 && (a + b) < 100) {
        printf("Both numbers are positive and their sum is less than 100.\n");
    } else {
        printf("Condition not satisfied.\n");
    }

    return 0;
}
