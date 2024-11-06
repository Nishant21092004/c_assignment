#include <stdio.h>

int main() {
    // Defining constants for the number of students and subjects
    int num_students = 10;
    int num_subjects = 3;

    // Defining arrays to store student data
    int roll_no[10];
    int marks[10][3];  // marks[i][0], marks[i][1], marks[i][2] represent marks for subjects 1, 2, and 3
    int total_marks[10];

    // Variables to store results for part (b) and (c)
    int highest_subject[3] = {0, 0, 0};  // To store highest marks in each subject
    int highest_roll_subject[3] = {0, 0, 0};  // Roll no. of the student who secured highest marks in each subject
    int highest_total_marks = 0;  // To store the highest total marks
    int highest_total_roll_no = 0;  // Roll no. of the student with the highest total marks

    // Reading the data from the user
    printf("Enter roll number and marks for Subject 1, Subject 2, and Subject 3:\n");

    for (int i = 0; i < num_students; i++) {
        printf("\nEnter roll number for student %d: ", i + 1);
        scanf("%d", &roll_no[i]);

        printf("Enter marks for Subject 1, Subject 2, Subject 3: ");
        for (int j = 0; j < num_subjects; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate total marks for each student and find highest in each subject
    for (int i = 0; i < num_students; i++) {
        total_marks[i] = 0;  // Initialize total marks for each student

        for (int j = 0; j < num_subjects; j++) {
            total_marks[i] += marks[i][j];  // Calculate total marks for each student

            // Find the highest marks in each subject
            if (marks[i][j] > highest_subject[j]) {
                highest_subject[j] = marks[i][j];
                highest_roll_subject[j] = roll_no[i];
            }
        }

        // Find the student with the highest total marks
        if (total_marks[i] > highest_total_marks) {
            highest_total_marks = total_marks[i];
            highest_total_roll_no = roll_no[i];
        }
    }

    // Display the total marks for each student
    printf("\n(a) Total marks obtained by each student:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Roll No: %d, Total Marks: %d\n", roll_no[i], total_marks[i]);
    }

    // Display the highest marks in each subject and the corresponding roll numbers
    printf("\n(b) Highest marks in each subject:\n");
    for (int j = 0; j < num_subjects; j++) {
        printf("Subject %d: Highest Marks = %d, Roll No = %d\n", j + 1, highest_subject[j], highest_roll_subject[j]);
    }

    // Display the student who obtained the highest total marks
    printf("\n(c) Student with the highest total marks:\n");
    printf("Roll No: %d, Total Marks: %d\n", highest_total_roll_no, highest_total_marks);

    return 0;
}
