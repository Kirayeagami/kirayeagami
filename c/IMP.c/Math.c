#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, discriminant;

  // Get the coefficients of the quadratic equation
  printf("Enter the coefficients of the quadratic equation:\n");
  printf("a = ");
  scanf("%f", &a);
  printf("b = ");
  scanf("%f", &b);
  printf("c = ");
  scanf("%f", &c);

  // Calculate the discriminant
  discriminant = b * b - 4 * a * c;

  // Check if the discriminant is positive
  if (discriminant >= 0) {
    // The quadratic equation has real roots
    printf("The quadratic equation has real roots.\n");

    // Find the roots using the quadratic formula
    float root1 = (-b + sqrt(discriminant)) / (2 * a);
    float root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("The roots of the quadratic equation are:\n");
    printf("root1 = %f\n", root1);
    printf("root2 = %f\n", root2);
  } else {
    // The quadratic equation does not have real roots
    printf("The quadratic equation does not have real roots.\n");
  }

  return 0;
}