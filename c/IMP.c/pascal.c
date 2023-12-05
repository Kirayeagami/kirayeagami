#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &n);

    // Create and initialize the Pascal's triangle array
    int pascal[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    // Print Pascal's triangle
    for (int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            printf("   ");
        }

        // Print the values in this row
        for (int j = 0; j <= i; j++) {
            printf("%6d   ", pascal[i][j]);
        }

        printf("\n");
    }

    return 0;
}