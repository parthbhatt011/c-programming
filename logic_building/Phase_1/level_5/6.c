//Take three numbers and check if they are in geometric progression.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != 0 && (b * b) == (a * c)) {
        printf("The numbers are in Geometric Progression (GP).\n");
    } else {
        printf("The numbers are NOT in Geometric Progression.\n");
    }

    return 0;
}
