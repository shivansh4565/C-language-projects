#include <stdio.h>

int main() {
   float length, width, area;

   // Prompt user to enter the length of the rectangle
   printf("Enter the length of the rectangle: ");
   scanf("%f", &length);

   // Prompt user to enter the width of the rectangle
   printf("Enter the width of the rectangle: ");
   scanf("%f", &width);

   // Calculate the area of the rectangle
   area = length * width;

   // Display the area of the rectangle
   printf("The area of the rectangle is: %f\n", area);

   return 0;
}
