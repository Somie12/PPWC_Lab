#include <stdio.h>
#include <string.h>

int main() {
    char desiredGrade[3];
    float minAverageRequired;
    float currentAverage;
    float finalWeight;
    float requiredFinalScore;

    // Prompt the user for input
    printf("Enter desired grade> ");
    scanf("%s", desiredGrade);
    
    printf("Enter minimum average required> ");
    scanf("%f", &minAverageRequired);
    
    printf("Enter current average in course> ");
    scanf("%f", &currentAverage);
    
    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%f", &finalWeight);

    // Calculate the required score on the final exam
    // The formula to find the required final score:
    // (currentAverage * (1 - finalWeight/100) + requiredFinalScore * (finalWeight/100)) = minAverageRequired
    // Rearranging gives:
    // requiredFinalScore = (minAverageRequired - currentAverage * (1 - finalWeight/100)) / (finalWeight/100)

    requiredFinalScore = (minAverageRequired - currentAverage * (1 - finalWeight / 100)) / (finalWeight / 100);

    // Display the result
    printf("You need a score of %.2f on the final to get a %s.\n", requiredFinalScore, desiredGrade);

    return 0;
}