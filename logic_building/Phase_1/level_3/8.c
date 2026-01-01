//Check if a number lies within the range [100, 999]. 

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
        printf("Number lies within the range [100, 999].\n");
    else
        printf("Number does NOT lie within the range [100, 999].\n");

    return 0;
}
