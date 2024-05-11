#include <stdio.h>

int main() {
   float height, breadth,length, area;

   // Prompt user to enter the length of the cuboid
   printf("Enter the length of the cuboid: ");
   scanf("%f", &length);

   // Prompt user to enter the breadth of the cuboid
   printf("Enter the breadth of the cuboid: ");
   scanf("%f", &breadth);
   
    // Prompt user to enter the height of the cuboid
   printf("Enter the height of the cuboid: ");
   scanf("%f", &height);

   // Calculate the area of the cuboid
   area = length * breadth * height;

   // Display the area of the cuboid
   printf("The area of the cuboid is: %f\n", area);

   return 0;
}
