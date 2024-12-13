#include <stdio.h>

int binary_srch(int arr[], int size, int target) {
    int bottom = 0;
    int top = size - 1;
    int found = 0; // 0 means false, 1 means true
    int index = -1; // To store the index of the found element

    while (bottom <= top && !found) {
        int middle = bottom + (top - bottom) / 2; // Calculate middle index

        if (arr[middle] == target) {
            found = 1; // Set found to true
            index = middle; // Store the index of the found element
        } else if (arr[middle] > target) {
            top = middle - 1; // Search in the left half
        } else {
            bottom = middle + 1; // Search in the right half
        }
    }

    return index; // Return the index of the found element or -1 if not found
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70, 80, 90}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    printf("Array: ");
    printArray(arr, size);

    int result = binary_srch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}