#include <stdio.h>

int main(void) {
    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Hello World");

    // Close the file
    fclose(fptr);

    // Open a file in append mode
    FILE *filePointer;

    filePointer = fopen("filename.txt", "a");

    // Write some text to the file
    fprintf(filePointer, "\nThis is C programming language");

    // Close the file
    fclose(filePointer);


    // Open a file in append mode
    FILE *fileReader;

    fileReader = fopen("filename.txt", "r");

    // Print some text if the file does not exist
    if (fptr == NULL) {
        printf("Not able to open the file.");
    }

    // Store the content of the file
    char myString[100];

    // Read the content and store it inside myString
    while (fgets(myString, 100, fileReader)) {
        // Print the file content
        printf("%s", myString);
    }
    // Close the file
    fclose(fileReader);
}