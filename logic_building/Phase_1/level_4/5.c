//Take income and age, and check if eligible for tax

#include <stdio.h>

int main() {
    int age;
    long income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter annual income: ");
    scanf("%ld", &income);

    if (age > 18 && income > 500000) {
        printf("Eligible for tax.\n");
    } else {
        printf("Not eligible for tax.\n");
    }

    return 0;
}
