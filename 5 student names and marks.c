#include <stdio.h>
#include <stdlib.h>
#define max_students 5
#define name_size 50

typedef struct {
    char name[name_size];
    float marks;
} Student;

void writeStudentsToFile(Student students[], int count) {
    FILE *fptr = fopen("C:\\Users\\user\\Desktop\\file.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing");
        exit(1);
    }

    for (int i = 0; i < count; i++) {
        fprintf(fptr, "Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }
    fclose(fptr);
}

int main() {
    Student students[max_students];

    for (int i = 0; i < max_students; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar();
    }

    writeStudentsToFile(students, max_students);
    printf("Student data has been written successfully\n");

    return 0;
}
