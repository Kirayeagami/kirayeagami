#include <stdio.h>

int main() {
  int n, sum = 0, i = 1;

  // Get the value of n from the user
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Add the first n natural numbers
  do {
    sum += i;
    i++;
  } while (i <= n);

  // Print the sum of the first n natural numbers
  printf("The sum of the first %d natural numbers is %d.\n", n, sum);

  // Add the first n even numbers
  i = 2;
  sum = 0;
  do {
    sum += i;
    i += 2;
  } while (i <= 2 * n);

  // Print the sum of the first n even numbers
  printf("The sum of the first %d even numbers is %d.\n", n, sum);

  // Add the first n odd numbers
  i = 1;
  sum = 0;
  do {
    sum += i;
    i += 2;
  } while (i <= 2 * n - 1);
  // Print the sum of the first n odd numbers
  printf("The sum of the first %d odd numbers is %d.\n", n, sum);

  return 0;
}