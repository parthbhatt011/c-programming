//Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night”. 

#include <stdio.h>

int main() {
    int hour;

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 23) {
        printf("Invalid hour! Please enter a value between 0 and 23.\n");
    }
    else if (hour >= 5 && hour <= 11) {
        printf("Good Morning\n");
    }
    else if (hour >= 12 && hour <= 16) {
        printf("Good Afternoon\n");
    }
    else if (hour >= 17 && hour <= 20) {
        printf("Good Evening\n");
    }
    else {
        printf("Good Night\n");
    }

    return 0;
}
