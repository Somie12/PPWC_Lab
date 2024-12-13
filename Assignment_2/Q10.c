#include <stdio.h>

int main() {
    int number;

    // Accept input from the user
    printf("Enter the number > ");
    scanf("%d", &number);

    // Print the top border
    printf("+-----------------------------------------+\n");
    printf("|\n");

    // Print the multiplication results
    printf(" ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", number * i);
    }
    printf("|\n");
    
    printf("|\n");
    printf("|\n");

    // Print the multipliers
    printf(" ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("|\n");

    // Print the constant number row
    printf(" ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", number);
    }
    printf("|\n");

    // Print the bottom border
    printf("+-----------------------------------------+\n");

    return 0;
}