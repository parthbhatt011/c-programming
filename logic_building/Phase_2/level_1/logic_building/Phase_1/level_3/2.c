//Take a 3-digit number and determine if the middle digit is largest, smallest, or neither

#include <stdio.h>

int main() {
    int num, a, b, c;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    a = num / 100;
    b = (num / 10) % 10;  // middle digit
    c = num % 10;

    if (b > a && b > c)
        printf("Middle digit is the largest.\n");
    else if (b < a && b < c)
        printf("Middle digit is the smallest.\n");
    else
        printf("Middle digit is neither largest nor smallest.\n");

    return 0;
}
