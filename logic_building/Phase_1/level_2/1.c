//Take three sides and check if they form a valid triangle. 

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid Triangle\n");
    }
    else {
        printf("Invalid Triangle\n");
    }

    return 0;
}
