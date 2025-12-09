//Check if one of two given numbers is a multiple of the other. 

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("Zero cannot be used for checking multiples.\n");
    } else if (a % b == 0) {
        printf("%d is a multiple of %d\n", a, b);
    } else if (b % a == 0) {
        printf("%d is a multiple of %d\n", b, a);
    } else {
        printf("Neither number is a multiple of the other.\n");
    }

    return 0;
}
