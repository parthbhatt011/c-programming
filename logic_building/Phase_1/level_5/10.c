//Take a year and print the corresponding century (e.g., “19th century”, “20th century”)

#include <stdio.h>

int main() {
    int year, century;

    printf("Enter year: ");
    scanf("%d", &year);

    century = (year - 1) / 100 + 1;

    if (century % 100 >= 11 && century % 100 <= 13)
        printf("%dth century\n", century);
    else if (century % 10 == 1)
        printf("%dst century\n", century);
    else if (century % 10 == 2)
        printf("%dnd century\n", century);
    else if (century % 10 == 3)
        printf("%drd century\n", century);
    else
        printf("%dth century\n", century);

    return 0;
}
