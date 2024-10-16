#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Taking the number of integers as input from the user
    printf("Enter the number of integers to be entered: \n");
    scanf("%d", &n);

    // Dynamically allocating memory for the array
    int* arr = (int*)malloc(n * sizeof(int));

    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory not available \n");
        exit(1);
    }

    // Taking the integers as input from the user
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocating the memory
    free(arr);

    return 0;
}
