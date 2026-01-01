// =========================================================
// ADVANCED FUNCTIONS LIBRARY (ALL-IN-ONE)
// Author: Parth Bhatt
// =========================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// =========================================================
// 1. FAST EXPONENTIATION (Binary Power)
// =========================================================
long long fastPow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// =========================================================
// 2. SIEVE OF ERATOSTHENES
// =========================================================
void sieve(int n) {
    int *prime = calloc(n+1, sizeof(int));
    for (int i = 2; i * i <= n; i++)
        if (!prime[i])
            for (int j = i*i; j <= n; j += i)
                prime[j] = 1;

    for (int i = 2; i <= n; i++)
        if (!prime[i]) printf("%d ", i);

    free(prime);
}

// =========================================================
// 3. KADANE'S ALGORITHM
// =========================================================
int kadane(int arr[], int n) {
    int max_so_far = arr[0], curr = arr[0];
    for (int i = 1; i < n; i++) {
        curr = (arr[i] > curr + arr[i]) ? arr[i] : curr + arr[i];
        if (curr > max_so_far) max_so_far = curr;
    }
    return max_so_far;
}

// =========================================================
// 4. REVERSE LINKED LIST
// =========================================================
struct Node {
    int data;
    struct Node *next, *left, *right;
};

struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL, *next = NULL;
    while (head) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

// =========================================================
// 5. BINARY SEARCH
// =========================================================
int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// =========================================================
// 6. MATRIX MULTIPLICATION
// =========================================================
void multiply(int A[][10], int B[][10], int C[][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

// =========================================================
// 7. PALINDROME CHECK (RECURSION)
// =========================================================
int isPal(char *s, int l, int r) {
    if (l >= r) return 1;
    return (s[l] == s[r]) && isPal(s, l+1, r-1);
}

// =========================================================
// 8. COUNT SET BITS (Brian Kernighan)
// =========================================================
int countBits(unsigned int n) {
    int c = 0;
    while (n) {
        n &= (n - 1);
        c++;
    }
    return c;
}

// =========================================================
// 9. INSERT INTO BINARY SEARCH TREE
// =========================================================
struct Node* insertBST(struct Node* root, int key) {
    if (!root) {
        root = malloc(sizeof(struct Node));
        root->data = key;
        root->left = root->right = NULL;
        root->next = NULL;
        return root;
    }
    if (key < root->data) root->left = insertBST(root->left, key);
    else root->right = insertBST(root->right, key);

    return root;
}

// =========================================================
// 10. READ FILE LINE-BY-LINE
// =========================================================
void readFile(const char *name) {
    FILE *fp = fopen(name, "r");
    if (!fp) {
        printf("Could not open file.\n");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);

    fclose(fp);
}

// =========================================================
// 11. QUICKSORT
// =========================================================
int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
        }
    }

    int temp = arr[i+1]; arr[i+1] = arr[r]; arr[r] = temp;
    return i + 1;
}

void quickSort(int arr[], int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

// =========================================================
// 12. MERGE SORT
// =========================================================
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

// =========================================================
// 13. FIBONACCI WITH MEMOIZATION
// =========================================================
long long fib(int n, long long memo[]) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
}

// ======
