// Check if a number is divisible by 5

#include <stdio.h>

int isDivisibleBy5(int x) {
    return (x % 5 == 0); 
}

int main() {
    int x;
    printf("Enter the number to check: ");
    scanf("%d", &x);

    if (isDivisibleBy5(x)) {
        printf("The number is divisible by 5\n");
    } else {
        printf("The number is not divisible by 5\n");
    }

    return 0;
}
