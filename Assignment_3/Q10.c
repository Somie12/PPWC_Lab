#include <stdio.h>
#include <string.h>
#include <math.h>

void binaryToHexadecimal(char *binary) {
    int len = strlen(binary);
    int decimal = 0;
    int power = 0;

    // Convert binary to decimal
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    // Convert decimal to hexadecimal
    char hexadecimal[100];
    int index = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;

        if (remainder < 10) {
            hexadecimal[index] = remainder + '0';
        } else {
            hexadecimal[index] = remainder - 10 + 'A';
        }

        decimal /= 16;
        index++;
    }

    hexadecimal[index] = '\0';

    // Reverse the hexadecimal string
    printf("The hexadecimal equivalent is: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToHexadecimal(binary);

    return 0;
}
