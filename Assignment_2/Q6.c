#include <stdio.h>

// Function to determine if a year is a leap year
int leap(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; // Leap year
            }
            return 0; // Not a leap year
        }
        return 1; // Leap year
    }
    return 0; // Not a leap year
}

// Function to determine the day number in the year
int dayOfYear(int month, int day, int year) {
    // Array to hold the number of days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // If it's a leap year, adjust February's days
    if (leap(year)) {
        daysInMonth[2] = 29;
    }

    // Calculate the day number
    int dayNumber = 0;
    for (int i = 1; i < month; i++) {
        dayNumber += daysInMonth[i]; // Add the days of the previous months
    }
    dayNumber += day; // Add the days of the current month

    return dayNumber;
}

int main() {
    int month, day, year;

    // Input: month, day, year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter year: ");
    scanf("%d", &year);

    // Validate input
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date input!\n");
        return 1;
    }

    // Check for valid day in the month
    if ((month == 2 && day > (leap(year) ? 29 : 28)) || 
        (month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        printf("Invalid date input!\n");
        return 1;
    }

    // Calculate the day number
    int dayNumber = dayOfYear(month, day, year);
    printf("The day number is: %d\n", dayNumber);

    return 0;
}