//Take time (hours and minutes) and print the smaller angle between the hour and minute hands

#include <stdio.h>

int main() {
    int day, month;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid date\n");
    }
    else if ((month == 1 || month == 3 || month == 5 || month == 7 ||
              month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31)) {
        printf("Valid date\n");
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30)) {
        printf("Valid date\n");
    }
    else if (month == 2 && (day >= 1 && day <= 28)) {
        printf("Valid date\n");
    }
    else {
        printf("Invalid date\n");
    }

    return 0;
}
