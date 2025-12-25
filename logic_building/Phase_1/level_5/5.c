//Take three numbers and check if they are in arithmetic progression

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((b - a) == (c - b)) {
        printf("The numbers are in Arithmetic Progression (AP).\n");
    } else {
        printf("The numbers are NOT in Arithmetic Progression.\n");
    }

    return 0;
}
