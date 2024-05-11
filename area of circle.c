#include <stdio.h>

#define PI 3.14159

int main() {
   float radius, area;

   // Prompt user to enter the radius of the circle
   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   // Calculate the area of the circle
   area = PI * radius * radius;

   // Display the area of the circle
   printf("The area of the circle is: %f\n", area);

   return 0;
}
