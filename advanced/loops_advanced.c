#include <stdio.h>
#include <math.h>

int main() {

    // 1. Check if a number is PRIME
    int num, isPrime = 1;
    printf("Enter a number to check if prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number\n\n", num);
    else
        printf("%d is NOT a Prime Number\n\n", num);


    // 2. Print all PRIME numbers in a range
    int start, end;
    printf("Enter start and end range to print prime numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        int prime = 1;
        if (i <= 1) continue;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) printf("%d ", i);
    }
    printf("\n\n");


    // 3. Strong Number (145 = 1! + 4! + 5!)
    int n, temp, digit, fact, sum = 0;
    printf("Enter a number to check Strong Number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is a Strong Number\n\n", n);
    else
        printf("%d is NOT a Strong Number\n\n", n);


    // 4. Palindromic Pattern with spaces
    int rows;
    printf("Enter rows for advanced palindrome pattern: ");
    scanf("%d", &rows);

    printf("Palindromic Number Pattern:\n");
    for (int i = 1; i <= rows; i++) {

        // Leading spaces
        for (int s = 1; s <= rows - i; s++)
            printf(" ");

        // Descending numbers
        for (int j = i; j >= 1; j--)
            printf("%d", j);

        // Ascending numbers
        for (int j = 2; j <= i; j++)
            printf("%d", j);

        printf("\n");
    }

    printf("\n");

    // 5. Floyd’s Triangle
    int count = 1;
    printf("Floyd's Triangle:\n");
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count++);
        }
        printf("\n");
    }

    return 0;
}
