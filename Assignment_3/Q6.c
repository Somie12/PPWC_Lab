#include <stdio.h>

void findDifference(int arr1[], int size1, int arr2[], int size2) {
    int found;

    printf("Difference (arr1 - arr2): ");
    for (int i = 0; i < size1; i++) {
        found = 0; // Reset found flag for each element in arr1

        // Check if arr1[i] exists in arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1; // Element found in arr2
                break; // No need to continue searching
            }
        }

        // If not found in arr2, print the element
        if (!found) {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findDifference(arr1, size1, arr2, size2);

    return 0;
}