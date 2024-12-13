#include <stdio.h>

void copyDistinctElements(int input[], int size, int output[], int *outputSize) {
    int found;

    *outputSize = 0; // Initialize output size

    for (int i = 0; i < size; i++) {
        found = 0; // Reset found flag for each element in input array

        // Check if the element already exists in the output array
        for (int j = 0; j < *outputSize; j++) {
            if (input[i] == output[j]) {
                found = 1; // Element already exists
                break; // No need to continue searching
            }
        }

        // If not found, add it to the output array
        if (!found) {
            output[*outputSize] = input[i];
            (*outputSize)++; // Increment the size of the output array
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int inputArray[] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(inputArray) / sizeof(inputArray[0]);
    int outputArray[size]; // Maximum size can be the same as input array
    int outputSize = 0; // To hold the size of the output array

    copyDistinctElements(inputArray, size, outputArray, &outputSize);

    printf("Distinct elements copied to the output array:\n");
    printArray(outputArray, outputSize);

    return 0;
}