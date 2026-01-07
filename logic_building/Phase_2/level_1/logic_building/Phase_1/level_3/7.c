//check if an amount can be evenly divided into 2000, 500, and 100 currency notes. 

#include <stdio.h>

int main() {
    int amount;
    int n2000, n500, n100;

    printf("Enter amount: ");
    scanf("%d", &amount);

    if (amount < 100 || amount % 100 != 0) {
        printf("Amount cannot be evenly divided into 2000, 500, and 100 notes.\n");
        return 0;
    }

    n2000 = amount / 2000;
    amount %= 2000;

    n500 = amount / 500;
    amount %= 500;

    n100 = amount / 100;

    printf("2000 notes = %d\n", n2000);
    printf("500 notes  = %d\n", n500);
    printf("100 notes  = %d\n", n100);

    return 0;
}
