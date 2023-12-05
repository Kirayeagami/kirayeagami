#include <stdio.h>

int main() {
  int n, sum;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  sum = 0;
  for (int i = 1; i <= n; i++) {
    int term = 0;
    for (int j = 1; j <= i; j++) {
      term += j;
    }
    sum += term;
  }

  printf("The sum of the series is: %d\n", sum);

  return 0;
}