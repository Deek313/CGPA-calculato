#include <stdio.h>

int main() {
    int numSubjects = 3; // Fixed number of subjects
    float totalPoints = 0.0, totalCredits = 0.0;

    // Loop through each subject to get grades and credit hours
    for (int i = 0; i < numSubjects; i++) {
        char grade;
        int credits;
        float gradePoints;

        // Input credit hours
        printf("Enter credit hours for subject %d: ", i + 1);
        scanf("%d", &credits);

        // Input grade
        printf("Enter grade for subject %d (A, B, C, D, F): ", i + 1);
        scanf(" %c", &grade);  // Note the space before %c to consume any leftover newline

        // Convert grade to grade points
        switch (grade) {
            case 'A':
                gradePoints = 4.0;
                break;
            case 'B':
                gradePoints = 3.0;
                break;
            case 'C':
                gradePoints = 2.0;
                break;
            case 'D':
                gradePoints = 1.0;
                break;
            case 'F':
                gradePoints = 0.0;
                break;
            default:
                printf("Invalid grade entered.\n");
                return 1; // Exit with error code
        }

        // Calculate total points and credits
        totalPoints += (gradePoints * credits);
        totalCredits += credits;
    }

    // Calculate CGPA
    if (totalCredits > 0) {
        float cgpa = totalPoints / totalCredits;
        printf("Your CGPA is: %.2f\n", cgpa);
    } else {
        printf("No credits entered. Cannot calculate CGPA.\n");
    }

    return 0; // Successful execution
}
