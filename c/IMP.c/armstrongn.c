#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int original = num;
    int n = 0;
    int sum = 0;

    // Count the number of digits in 'num'
    while (num != 0) {
        num /= 10;
        n++;
    }

    // Reset 'num' to its original value
    num = original;

    // Calculate the sum of the digits raised to the power of 'n'
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    // Check if 'original' is an Armstrong number
    return (sum == original);
}

int main() {
    printf("Armstrong numbers between 100 and 1000 are:\n");

    for (int i = 100; i <= 1000; i++) {
        if (is_armstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}