#include <stdio.h>
#define min 60
int main() {
    int hours, minutes, seconds;

    // Input the number of hours
    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    // Convert hours to minutes
    minutes = hours * min;

    // Convert hours to seconds
    seconds = hours * min * min;

    // Display the converted values
    printf("%d hours is equivalent to:\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}
