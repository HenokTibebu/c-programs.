// Names and marks of n students
#include <stdio.h>
#include <stdlib.h>
#define name_size 50

typedef struct {
    char name[name_size];
    float marks;
} Student;

// Function to write or append student data to the file
void saveStudentsToFile(Student students[], int count) {
    FILE *fptr = fopen("C:\\Users\\user\\Desktop\\Students.txt", "a"); // Open for appending

    if (fptr == NULL) {
        printf("Error opening file for writing");
        exit(1);
    }

    for (int i = 0; i < count; i++) {
        fprintf(fptr, "Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }
    fclose(fptr); // Close the file
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

    Student *students = (Student *)malloc(n * sizeof(Student)); // Allocate memory for students

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove the newline character at the end of the string, if present
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar();
    }

    saveStudentsToFile(students, n);
    printf("Student data has been appended successfully");

    free(students); // Free allocated memory
    return 0;
}
