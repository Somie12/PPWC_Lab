#include <stdio.h>

int main() {
    float meters;

    // Prompt the user to enter a distance in meters
    printf("Enter distance in meters: ");
    scanf("%f", &meters);

    // Perform conversions
    float kilometers = meters * 0.001;
    float centimeters = meters * 100;
    float millimeters = meters * 1000;
    float feet = meters * 3.28084;
    float inches = meters * 39.3701;

    // Display the conversions in a table
    printf("\n+------------------+------------------+\n");
    printf("| Unit             | Value            |\n");
    printf("+------------------+------------------+\n");
    printf("| Meters           | %.2f            |\n", meters);
    printf("| Kilometers       | %.2f            |\n", kilometers);
    printf("| Centimeters      | %.2f            |\n", centimeters);
    printf("| Millimeters      | %.2f            |\n", millimeters);
    printf("| Feet             | %.2f            |\n", feet);
    printf("| Inches           | %.2f            |\n", inches);
    printf("+------------------+------------------+\n");

    return 0;
}