#include <stdio.h>
#include <string.h>

void countCharacters(const char *str) {
    int count[256] = {0}; // Array to store the count of each character (ASCII values)

    // Traverse the string and count each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("The count of each character in the string \"%s\" is:\n", str);

    // Display the count of each character
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c-%d, ", i, count[i]);
        }
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    countCharacters(str);

    return 0;
}
