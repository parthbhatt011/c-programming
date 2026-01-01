// Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both. 

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("FizzBuzz\n");
    }
    else if (num % 3 == 0) {
        printf("Fizz\n");
    }
    else if (num % 5 == 0) {
        printf("Buzz\n");
    }
    else {
        printf("Not divisible by 3 or 5\n");
    }

    return 0;
}
