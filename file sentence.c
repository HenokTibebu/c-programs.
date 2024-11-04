#include <stdio.h>
#include <stdlib.h>


#define buffer_size 100

// Function to write a sentence to the file
void writeToFile() {
    char buffer[buffer_size];
    FILE *fptr = fopen("C:\\Users\\user\\Desktop\\data.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file for writing");
        exit(1);
    }

    printf("Enter a sentence (up to 100 characters): ");
    fgets(buffer, sizeof(buffer), stdin);
    fprintf(fptr, "%s", buffer);
    fclose(fptr);
}

// Function to read contents from the file and display it
void readFromFile() {
    char buffer[buffer_size];
    FILE *fptr = fopen("C:\\Users\\user\\Desktop\\data.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file for reading");
        exit(1);
    }

    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }
    fclose(fptr);
}

// Function to append a sentence to the file
void appendToFile() {
    char buffer[buffer_size];
    FILE *fptr = fopen("C:\\Users\\user\\Desktop\\data.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file for appending");
        exit(1);
    }

    printf("Enter another sentence to append: ");
    fgets(buffer, sizeof(buffer), stdin);
    fprintf(fptr, "%s", buffer);
    fclose(fptr);
}

int main() {
    int choice;

    while (1) {
        printf("\nFile Operations Menu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
