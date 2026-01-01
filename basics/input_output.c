#include <stdio.h>

int main() {
    int age;
    float salary;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter your grade: ");
    scanf(" %c", &grade);  // space before %c to avoid input buffer issues

    printf("\n--- User Details ---\n");
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Grade: %c\n", grade);

    return 0;
}
