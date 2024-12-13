#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and merge them in sorted order
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // If there are remaining elements in arr1
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {12, 20, 24, 32};
    int arr2[] = {7, 8, 65, 105};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2]; // Create an array to hold the merged result

    // Merge the two sorted arrays
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    // Print the merged sorted array
    printf("Merged sorted array:\n");
    printArray(merged, size1 + size2);

    return 0;
}