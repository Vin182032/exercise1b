
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

int main() {
    int n, i;
    char name[MAX_NAME_LENGTH];
    float marks;
    FILE *file;

    // Ask for number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Open the file in append mode
    file = fopen("students.txt", "a"); // 'a' mode to append data
    if (file == NULL) {
        fprintf(stderr, "Could not open file for writing.\n");
        return 1;
    }

    // Loop to read student names and marks
    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name); // Read name
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks); // Read marks

        // Write to the file
        fprintf(file, "Name: %s, Marks: %.2f\n", name, marks);
    }

    // Close the file
    fclose(file);
    printf("Data has been written to students.txt successfully.\n");

    return 0;
}