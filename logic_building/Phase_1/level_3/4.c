//Check whether a given integer is single-digit, double-digit, or multi-digit

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    num = abs(num);

    if (num >= 0 && num <= 9)
        printf("Single-digit number");
    else if (num >= 10 && num <= 99)
        printf("Double-digit number");
    else
        printf("Multi-digit number");

    return 0;
}
