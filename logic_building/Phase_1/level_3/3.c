//Take a 4-digit number and check if the first and last digits are equal
#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    first = num / 1000;
    last = num % 10;

    if (first == last)
        printf("First and last digits are equal.\n");
    else
        printf("First and last digits are not equal.\n");

    return 0;
}
