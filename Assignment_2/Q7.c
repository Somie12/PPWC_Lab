#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Ask the user for marks
    printf("Enter the marks obtained by the student (0-100): ");
    scanf("%d", &marks);

    // Determine the grade using switch-case
    switch (marks / 10) {
        case 10: // This case handles marks 100
        case 9:  // Marks from 90 to 99
            if (marks >= 95) {
                grade = 'O'; // Outstanding
            } else {
                grade = 'A'; // A grade
            }
            break;
        case 8:  // Marks from 80 to 89
            grade = 'A'; // A grade
            break;
        case 7:  // Marks from 70 to 79
            grade = 'B'; // B grade
            break;
        case 6:  // Marks from 60 to 69
            grade = 'C'; // C grade
            break;
        case 5:  // Marks from 50 to 59
            grade = 'D'; // D grade
            break;
        case 4:  // Marks from 40 to 49
            grade = 'E'; // E grade
            break;
        default: // Marks below 40
            grade = 'F'; // Fail
            break;
    }

    // Output the grade
    if (marks >= 0 && marks <= 100) {
        printf("The grade is: %c\n", grade);
    } else {
        printf("Invalid marks entered! Please enter marks between 0 and 100.\n");
    }

    return 0;
}