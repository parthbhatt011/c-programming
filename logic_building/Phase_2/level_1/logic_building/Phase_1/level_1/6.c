//Take two numbers and print the larger one.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Larger number is: %d", a);
    else
        printf("Larger number is: %d", b);

    return 0;
}
