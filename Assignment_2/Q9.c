#include <stdio.h>

int main() {
    char choice;
    
    // Accept input from the user
    printf("Enter the choice of the character (A-Z): ");
    scanf(" %c", &choice);
    
    // Check if the input character is valid
    if (choice < 'A' || choice > 'Z') {
        printf("Please enter a valid character between A and Z.\n");
        return 1;
    }

    int n = choice - 'A'; // Determine the number of lines to print

    for (int i = 0; i <= n; i++) {
        // Print the first half of the characters
        for (char ch = 'A'; ch <= choice - i; ch++) {
            printf("%c ", ch);
        }

        // Print spaces in the middle
        for (int j = 0; j < 2 * i; j++) {
            printf("  "); // Two spaces for alignment
        }

        // Print the second half of the characters
        for (char ch = choice - i; ch >= 'A'; ch--) {
            if (ch != choice - i) { // Avoid printing the middle character twice
                printf("%c ", ch);
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}