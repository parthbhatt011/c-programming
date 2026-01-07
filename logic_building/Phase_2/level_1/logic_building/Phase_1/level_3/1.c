//Take a 3-digit number and check if all digits are distinct. 

#include <stdio.h>

int main() {
    int num, a, b, c;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    a = num / 100;        // hundreds
    b = (num / 10) % 10; // tens
    c = num % 10;        // units

    if (a != b && b != c && a != c)
        printf("All digits are distinct.\n");
    else
        printf("Digits are not distinct.\n");

    return 0;
}
