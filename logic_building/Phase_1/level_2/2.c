//If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene. 

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity using triangle inequality
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid Triangle\n");

        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        } else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Not a Valid Triangle\n");
    }

    return 0;
}

