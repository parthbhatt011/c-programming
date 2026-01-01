//Take two angles of a triangle and compute the third angle

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first angle: ");
    scanf("%d", &a);

    printf("Enter second angle: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0 || (a + b) >= 180) {
        printf("Invalid angles for a triangle\n");
    } else {
        c = 180 - (a + b);
        printf("Third angle = %d degrees\n", c);
    }

    return 0;
}
