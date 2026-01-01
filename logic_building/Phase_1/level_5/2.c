//Check whether three numbers form a Pythagorean Triplet

#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Assume z is the largest
    if (a >= b && a >= c) {
        z = a; x = b; y = c;
    } else if (b >= a && b >= c) {
        z = b; x = a; y = c;
    } else {
        z = c; x = a; y = b;
    }

    if (x*x + y*y == z*z) {
        printf("The numbers form a Pythagorean triplet.\n");
    } else {
        printf("The numbers do NOT form a Pythagorean triplet.\n");
    }

    return 0;
}
