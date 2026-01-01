#include <stdio.h>

int main() {

    // 1. Input and print an array
    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");


    // 2. Find the largest element in the array
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Largest element in the array = %d\n\n", max);


    // 3. Find the sum of all array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements = %d\n\n", sum);


    // 4. Reverse the array and print it
    printf("Reversed array:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");


    // 5. Search an element in the array (linear search)
    int search, found = 0;
    printf("Enter a number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d is found in the array.\n", search);
    else
        printf("%d is NOT found in the array.\n", search);

    return 0;
}
