//Take two dates (day and month) and determine which one comes first in the calendar.

#include <stdio.h>

int main() {
    int d1, m1, d2, m2;

    printf("Enter first date (day month): ");
    scanf("%d %d", &d1, &m1);

    printf("Enter second date (day month): ");
    scanf("%d %d", &d2, &m2);

    if (m1 < m2)
        printf("First date comes earlier.\n");
    else if (m1 > m2)
        printf("Second date comes earlier.\n");
    else {
        if (d1 < d2)
            printf("First date comes earlier.\n");
        else if (d1 > d2)
            printf("Second date comes earlier.\n");
        else
            printf("Both dates are the same.\n");
    }

    return 0;
}
