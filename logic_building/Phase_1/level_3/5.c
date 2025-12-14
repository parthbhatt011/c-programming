//Check if a number is a multiple of 7 or ends with 7

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 10 == 7 || num % 10 == -7)
        printf("The number is a multiple of 7 or ends with 7");
    else
        printf("The number is neither a multiple of 7 nor ends with 7");

    return 0;
}
