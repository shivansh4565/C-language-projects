#include <stdio.h>

#define PI 273.15

int main() {
   float centigrade, area;

   // Prompt user to enter the value of the temperature in centigrade
   printf("Enter the value of the temperature in centigrade: ");
   scanf("%f", &centigrade);

   // Calculate the value of the temperature in kelvin
   area = PI +centigrade;

   // Display the value of the temperature in kelvin
   printf("The value of the temperature in kelvin is: %f\n", area);

   return 0;
}
