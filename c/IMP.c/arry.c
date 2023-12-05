#include <stdio.h>

int main() {
  int arr[] = {5, 3, 7, 2, 1};
  int largest, smallest;

  largest = arr[0];
  smallest = arr[0];

  for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
    if (arr[i] < smallest) {
      smallest = arr[i];
    }
  }

  printf("The largest number in the array is %d.\n", largest);
  printf("The smallest number in the array is %d.\n", smallest);

  return 0;
}