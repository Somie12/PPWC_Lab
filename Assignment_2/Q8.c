#include <stdio.h>

int main() {
    double x, sum = 0.0;
    int n;

    // Accept input from the user
    printf("Enter a value for x: ");
    scanf("%lf", &x);

    // Calculate the sum of the first nine terms of the series
    for (n = 1; n <= 9; n++) {
        // Each term of the series can be calculated as follows:
        double term = (pow(x - 1, n) / (n * pow(x, n))); // Alternating series
        sum += term; // Add the term to the sum
    }

    

    // Output the result
    printf("The sum of the first nine terms is: %lf\n", sum);

    return 0;
}