#include <stdio.h>

int main() {
  float base1, base2, height, area;

  // Input base1, base2, and height
  printf("Enter the length of base 1: ");
  scanf("%f", &base1);
  printf("Enter the length of base 2: ");
  scanf("%f", &base2);
  printf("Enter the height: ");
  scanf("%f", &height);

  // Calculate area
  area = 0.5 * (base1 + base2) * height;

  // Output the result
  printf("The area of the trapezium is: %.2f\n", area);

  return 0;
}