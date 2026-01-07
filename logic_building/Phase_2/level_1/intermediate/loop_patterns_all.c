#include <stdio.h>

void squarePattern(int n) {
    printf("\n1. Square Pattern\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
}

void rightTriangle(int n) {
    printf("\n2. Right Triangle\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void invertedRightTriangle(int n) {
    printf("\n3. Inverted Right Triangle\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void pyramid(int n) {
    printf("\n4. Pyramid\n");
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
}

void invertedPyramid(int n) {
    printf("\n5. Inverted Pyramid\n");
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
}

void diamond(int n) {
    printf("\n6. Diamond Pattern\n");
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
}

void numberTriangle(int n) {
    printf("\n7. Number Triangle\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void numberIncreasing(int n) {
    printf("\n8. Continuous Increasing Numbers\n");
    int x = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", x++);
        printf("\n");
    }
}

void floydTriangle(int n) {
    printf("\n9. Floyd’s Triangle\n");
    int x = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", x++);
        printf("\n");
    }
}

void zeroOneTriangle(int n) {
    printf("\n10. 0-1 Triangle\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", (i + j) % 2);
        printf("\n");
    }
}

void hollowSquare(int n) {
    printf("\n11. Hollow Square\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void hollowPyramid(int n) {
    printf("\n12. Hollow Pyramid\n");
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void mirroredRightTriangle(int n) {
    printf("\n13. Mirrored Right Triangle\n");
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void butterfly(int n) {
    printf("\n14. Butterfly Pattern\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        for (int s = 1; s <= 2*(n-i); s++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        for (int s = 1; s <= 2*(n-i); s++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void hourGlass(int n) {
    printf("\n15. Hourglass Pattern\n");
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n = 5;

    squarePattern(n);
    rightTriangle(n);
    invertedRightTriangle(n);
    pyramid(n);
    invertedPyramid(n);
    diamond(n);
    numberTriangle(n);
    numberIncreasing(n);
    floydTriangle(n);
    zeroOneTriangle(n);
    hollowSquare(n);
    hollowPyramid(n);
    mirroredRightTriangle(n);
    butterfly(n);
    hourGlass(n);

    return 0;
}
