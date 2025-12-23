//Check whether a point lies on X-axis, Y-axis, or Origin

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point lies at the Origin.\n");
    } else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    } else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } else {
        printf("The point lies neither on axes nor at origin.\n");
    }

    return 0;
}
