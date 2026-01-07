#include <stdio.h>

int main() {
    // Declaration of different data types
    int age = 20;
    float height = 5.9;
    char grade = 'A';
    double salary = 45000.75;

    // Printing values
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    printf("Salary: %.2lf\n", salary);

    // Taking user input
    int num;
    printf("\nEnter an integer value: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // Type conversion
    float converted = (float) num / 2;
    printf("Converted value (num/2 as float): %.2f\n", converted);

    return 0;
}
