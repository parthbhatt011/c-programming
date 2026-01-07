//Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions. 

#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (temp < 15) {
        printf("Cold\n");
    }
    else if (temp >= 15 && temp <= 30) {
        printf("Warm\n");
    }
    else {
        printf("Hot\n");
    }

    return 0;
}
