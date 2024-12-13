#include <stdio.h>

// First code snippet
int main() {
    int x = -123;
    printf("%u", x); // Output: 4294967173 (on a 32-bit system)
    // Explanation: %u prints the unsigned integer representation of x.
    // The negative value is converted to unsigned, resulting in a large positive number.
    return 0;
}

#include <stdio.h>

// Second code snippet
int main() {
    char ch = 'A';
    printf("%d", sizeof(ch)); // Output: 1
    printf("%d", sizeof('A')); // Output: 4 (on most systems)
    // Explanation: sizeof(ch) returns the size of a char, which is 1 byte.
    // sizeof('A') returns the size of the integer representation of the character, which is typically 4 bytes on most systems.
    return 0;
}

#include <stdio.h>

// Third code snippet
int main() {
    char ch = 97;
    printf("%d", sizeof(ch + 4)); // Output: 4
    // Explanation: ch + 4 is promoted to an int before sizeof is evaluated, which is 4 bytes.
    return 0;
}

#include <stdio.h>

// Fourth code snippet
int main() {
    int x = -123;
    printf("%X", x); // Output: FFFFFF85 (on a 32-bit system)
    // Explanation: %X prints the hexadecimal representation of x.
    // The negative value is represented in two's complement form.
    return 0;
}

#include <stdio.h>

// Fifth code snippet
int main() {
    int sum;
    sum = 2 + 4 / 2 + 6 * 2; // Output: 16
    // Explanation: The expression is evaluated according to operator precedence:
    // 4 / 2 = 2, 6 * 2 = 12, so sum = 2 + 2 + 12 = 16.
    printf("%d", sum);
    return 0;
}

#include <stdio.h>

// Sixth code snippet
int main() {
    int n = printf("Hello\n"); // Output: Hello (followed by 6)
    printf("%d ", n); // Output: 6
    // Explanation: printf returns the number of characters printed. "Hello\n" has 6 characters.
    return 0;
}

#include <stdio.h>

// Seventh code snippet
int main() {
    printf("%d==%f==%lf\n", 5, 55.5, 55.5); // Output: 5==55.500000==55.500000
    printf("%i==%e==%E\n", 5, 555.5, 123.45); // Output: 5==5.555000e+02==1.234500E+02
    printf("%o==%g==%G\n", 9, 555.5, 123.45); // Output: 11==555.5==123.45
    return 0;
}

#include <stdio.h>

// Eighth code snippet
int main() {
    printf("%d==%i==%o==%x\n", 32, 32, 32, 32); // Output: 32==32==40==20
    printf("%d==%i==%#o==%#x\n", 32, 32, 32, 32); // Output: 32==32==040==0x20
    printf("%d==%i==%#o==%#X\n", 32, 32, 32, 32); // Output: 32==32==040==0X20
    printf("%+d==%+i==%#o==%#X\n", 32, 32, 032, 0x45b); // Output: +32==+32==040==0X45B
    return 0;
}

#include <stdio.h>

// Ninth code snippet
int main() {
    double x = 3000.0, y = 0.0035;
    printf("%f %f %f\n", x, y, x * y, x / y); // Output: 3000.000000 0.003500 10.500000 857142.857143
    printf("%e %e %e\n", x, y, x * y, x / y); // Output: 3.000000e+03 3.500000e-03 1.050000e+01 8.571429e+05
        printf("%E %E %E\n", x, y, x * y, x / y); // Output: 3.000000E+03 3.500000E-03 1.050000E+01 8.571429E+05
    return 0;
}

#include <stdio.h>

// Tenth code snippet
int main() {
    int i = 54321;
    float x = 876.543;
    printf(":%3d: :%5d: :%10d: :%12d:\n", i, i, i, i); // Output: :54321: :54321: :    54321: :      54321:
    printf(":%3f: :%10f: :%13f: :%f:\n", x, x, x, x); // Output: :876.543000: :  876.543000: :   876.543000: :876.543000:
    return 0;
}

#include <stdio.h>

// Eleventh code snippet
int main() {
    int a, b, c;
    printf("Enter in decimal format:"); // User input expected
    scanf("%d", &a); // Decimal input
    printf("Enter in octal format: "); // User input expected
    scanf("%d", &b); // Octal input
    printf("Enter in hexadecimal format: "); // User input expected
    scanf("%d", &c); // Hexadecimal input
    printf("a = %d, b = %d, c = %d\n", a, b, c); // Output: a = <decimal>, b = <octal>, c = <hexadecimal>

    printf("Enter in decimal format:"); // User input expected
    scanf("%i", &b); // Decimal input (also accepts octal and hexadecimal)
    printf("Enter in octal format: "); // User input expected
    scanf("%i", &b); // Octal input (also accepts decimal and hexadecimal)
    printf("Enter in hexadecimal format: "); // User input expected
    scanf("%i", &c); // Hexadecimal input (also accepts decimal and octal)
    printf("a = %i, b = %i, c = %i\n", a, b, c); // Output: a = <decimal>, b = <octal>, c = <hexadecimal>
    return 0;
}