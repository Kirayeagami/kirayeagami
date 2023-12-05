#include <stdio.h>
#include <stdlib.h> // Required for qsort function

// Comparison function for ascending order
int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Comparison function for descending order
int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of integers
    int arr[100]; // Adjust the size as needed

    // Input the elements of the array
    printf("Enter the elements of the array, separated by spaces:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare_asc);

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array in descending order
    qsort(arr, n, sizeof(int), compare_desc);

    printf("Sorted array in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}