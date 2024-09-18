#include <stdio.h>

int main() {
    int qualification = -1;
    printf("Enter your qualification (post graduate (0)/graduate (1)): \n");
    scanf("%d", &qualification);
    float basic, hra, da, bonus, gross_salary;
    int years;

    switch (qualification) {
        case 0:
            basic = 50000.0;
            hra = 0.4 * basic;
            da = 0.9 * basic;
            break;
        case 1:
            basic = 40000.0;
            hra = 0.25 * basic;
            da = 0.7 * basic;
            break;
        default:
            printf("Invalid qualification. \n");
            break;
    }

    printf("Enter the number of years you have been working: ");
    scanf("%d", &years);

    if (years > 3) {
        bonus = 25000.0;
        printf("You are getting a bonus of 25000!! \n");
    } else {
        bonus = 0.0;
        printf("OOPS!! You are not eligible for the bonus!! \n");
    }

    gross_salary = basic + hra + da + bonus;
    printf("Your gross salary is: %.2f\n", gross_salary);

    return 0;
}
