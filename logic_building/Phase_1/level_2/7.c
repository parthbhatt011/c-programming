//Take two numbers and determine whether both are even, both are odd, or one is even and one is odd. 

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a % 2 == 0 && b % 2 == 0) {
        printf("Both numbers are even.\n");
    }
    else if (a % 2 != 0 && b % 2 != 0) {
        printf("Both numbers are odd.\n");
    }
    else {
        printf("One number is even and one number is odd.\n");
    }

    return 0;
}
