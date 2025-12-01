#include <stdio.h>

// ----------------------------------------------------
// 1. NUMBER SPIRAL (Clockwise Spiral)
// ----------------------------------------------------
void spiral(int n) {
    int a[n][n];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) a[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++) a[i][right] = num++;
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) a[bottom][i] = num++;
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) a[i][left] = num++;
            left++;
        }
    }

    printf("\n============================\n");
    printf("1. NUMBER SPIRAL (n = %d)\n", n);
    printf("============================\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
}


// ----------------------------------------------------
// 2. PASCAL TRIANGLE
// ----------------------------------------------------
void pascal(int n) {
    printf("\n============================\n");
    printf("2. PASCAL TRIANGLE (n = %d)\n", n);
    printf("============================\n");

    for (int line = 0; line < n; line++) {
        int value = 1;

        for (int s = 0; s < n - line; s++)
            printf(" ");

        for (int i = 0; i <= line; i++) {
            printf("%d ", value);
            value = value * (line - i) / (i + 1);
        }
        printf("\n");
    }
}


// ----------------------------------------------------
// 3. ALPHABET RANGOLI
// ----------------------------------------------------
void alphabetRangoli(int n) {
    char letters[26];
    for (int i = 0; i < 26; i++)
        letters[i] = 'a' + i;

    int size = 4*n - 3;
    char a[size][size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            a[i][j] = '-';

    int mid = size / 2;

    for (int i = 0; i < n; i++) {
        int row1 = mid - i;
        int row2 = mid + i;
        int col = mid;

        for (int j = 0; j <= i; j++) {
            a[row1][col - j] = letters[n-1-j];
            a[row1][col + j] = letters[n-1-j];
            a[row2][col - j] = letters[n-1-j];
            a[row2][col + j] = letters[n-1-j];
        }
    }

    printf("\n============================\n");
    printf("3. ALPHABET RANGOLI (n = %d)\n", n);
    printf("============================\n");

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%c", a[i][j]);
        printf("\n");
    }
}


// ----------------------------------------------------
// 4. CONCENTRIC NUMBER SQUARE
// ----------------------------------------------------
void concentric(int n) {
    int size = 2*n - 1;

    printf("\n============================\n");
    printf("4. CONCENTRIC NUMBER SQUARE (n = %d)\n", n);
    printf("============================\n");

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int layer = n - (top < bottom ? top : bottom);
            int layer2 = n - (left < right ? left : right);

            printf("%d ", (layer < layer2 ? layer : layer2));
        }
        printf("\n");
    }
}


// ----------------------------------------------------
// MAIN – SHOW ALL PATTERNS AUTOMATICALLY
// ----------------------------------------------------
int main() {
    int n = 5;   // fixed value — NO INPUT, all patterns show directly

    spiral(n);
    pascal(n);
    alphabetRangoli(n);
    concentric(n);

    return 0;
}
