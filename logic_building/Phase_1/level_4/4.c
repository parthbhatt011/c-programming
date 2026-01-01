//Program to check AM or PM using 24-hour time

#include <stdio.h>

int main() {
    int hour, minute;

    printf("Enter time in 24-hour format (HH MM): ");
    scanf("%d %d", &hour, &minute);

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid time");
    } 
    else if (hour < 12) {
        printf("AM");
    } 
    else {
        printf("PM");
    }

    return 0;
}
