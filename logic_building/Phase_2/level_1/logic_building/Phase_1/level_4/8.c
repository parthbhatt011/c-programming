// Take a weekday number (1–7) and determine if it is a weekday or weekend.
#include <stdio.h>

int main() {
    int day;
    printf("Enter weekday number (1-7): ");
    scanf("%d", &day);

    if(day >= 1 && day <= 5) {
        printf("It is a Weekday.\n");
    }
    else if(day == 6 || day == 7) {
        printf("It is a Weekend.\n");
    }
    else {
        printf("Invalid input! Enter a number between 1 and 7.\n");
    }

    return 0;
}
