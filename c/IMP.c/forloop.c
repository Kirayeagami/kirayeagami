#include <stdio.h>

int main() {
  int n, sum;

  // Get the value of n from the user
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Add the first n natural numbers
  sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  // Print the sum of the first n natural numbers
  printf("The sum of the first %d natural numbers is %d.\n", n, sum);

  // Add the first n even numbers
  sum = 0;
  for (int i = 2; i <= 2 * n; i += 2) {
    sum += i;
  }

  // Print the sum of the first n even numbers
  printf("The sum of the first %d even numbers is %d.\n", n, sum);

  // Add the first n odd numbers
  sum = 0;
  for (int i = 1; i <= 2 * n - 1; i += 2) {
    sum += i;
  }

  // Print the sum of the first n odd numbers
  printf("The sum of the first %d odd numbers is %d.\n", n, sum);

  return 0;
}