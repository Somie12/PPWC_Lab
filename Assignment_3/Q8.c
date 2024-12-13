#include <stdio.h>
#include <string.h>

char findFirstRepetitiveChar(const char *str) {
    int visited[256] = {0}; // Array to keep track of visited characters (ASCII values)

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(unsigned char)str[i]]) { // Check if the character is already visited
            return str[i]; // Return the first repetitive character
        }
        visited[(unsigned char)str[i]] = 1; // Mark character as visited
    }

    return '\0'; // Return null character if no repetition is found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = findFirstRepetitiveChar(str);
    if (result) {
        printf("The first repetitive character in the string \"%s\" is '%c'.\n", str, result);
    } else {
        printf("No repetitive characters found in the string \"%s\".\n", str);
    }

    return 0;
}
