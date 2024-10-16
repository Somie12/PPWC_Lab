#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;

    // Taking the number of characters as input from user
    printf("Enter the number of characters to be entered: \n");
    scanf("%d", &n);

    // Dynamically allocating memory for the string
    char* str = (char*)malloc((n + 1) * sizeof(char)); 

    // Checking if memory allocation was successful
    if (str == NULL) {
        printf("Memory not available \n");
        exit(1);
    }

    // Taking the characters as input from the user
    printf("Enter %d characters: ", n);
    scanf("%s", str); // Read a string

    // Reversing the string
    char* str_new = (char*)malloc((n + 1) * sizeof(char)); 
    if (str_new == NULL) {
        printf("Memory not available for reversed string\n");
        free(str); 
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        str_new[i] = str[n - 1 - i]; // Reversing the string
    }
    

    // Printing the reversed string
    printf("Reversed string: %s\n", str_new);

    // Deallocating the memory
    free(str);
    free(str_new);

    return 0;
}
