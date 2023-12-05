#include<stdio.h>

int main() {
  int i;

  // Demonstrate the continue statement
  printf("Continue statement:\n");
  for (i = 0; i < 10; i++) {
    if (i == 5) {
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");

  // Demonstrate the break statement
  printf("Break statement:\n");
  for (i = 0; i < 10; i++) {
    if (i == 5) {
      break;
    }
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}