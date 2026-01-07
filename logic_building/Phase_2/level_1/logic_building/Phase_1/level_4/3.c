//Program to print the median of three numbers

#include <stdio.h>

int main() {
    int a, b, c, median;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
        median = a;
    else if ((b > a && b < c) || (b > c && b < a))
        median = b;
    else
        median = c;

    printf("Median value = %d", median);

    return 0;
}
