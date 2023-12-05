#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int lower, upper;

    printf("Enter the lower and upper bounds: ");
    scanf("%d %d", &lower, &upper);

    if (lower < 2) {
        lower = 2; // Set the lower bound to 2 if it's less than 2
    }

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (int num = lower; num <= upper; num++) {
        if (is_prime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}