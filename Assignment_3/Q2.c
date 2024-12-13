#include <stdio.h>

void sumarr(int a[], int b[], int r[], int size) {
    for (int i = 0; i < size; i++) {
        r[i] = a[i] + b[i]; // Sum the corresponding elements
    }
}

int main() {
    int a[] = {5, 7, 2};
    int b[] = {2, 4, -2};
    int size = sizeof(a) / sizeof(a[0]); // Determine the size of the arrays
    int r[size]; // Declare the result array

    // Call the sumarr function
    sumarr(a, b, r, size);

    // Print the resulting array
    printf("Resultant array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");

    return 0;
}