#include <stdio.h>

int main() {
    float takeoffSpeed_kmh; // Takeoff speed in km/h
    float distance;         // Distance in meters
    float takeoffSpeed_ms; // Takeoff speed in m/s
    float acceleration;     // Acceleration in m/s^2
    float time;            // Time in seconds

    // Prompt the user for input
    printf("Enter takeoff speed (km/h): ");
    scanf("%f", &takeoffSpeed_kmh);
    
    printf("Enter distance over which the jet is accelerated (meters): ");
    scanf("%f", &distance);

    // Convert takeoff speed from km/h to m/s
    takeoffSpeed_ms = takeoffSpeed_kmh * (1000.0 / 3600.0);

    // Calculate acceleration using the formula: v^2 = 2as
    // Rearranged: a = v^2 / (2s)
    acceleration = (takeoffSpeed_ms * takeoffSpeed_ms) / (2 * distance);

    // Calculate time using the formula: v = at
    // Rearranged: t = v / a
    time = takeoffSpeed_ms / acceleration;

    // Display the results
    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to reach takeoff speed: %.2f seconds\n", time);

    return 0;
}