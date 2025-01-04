#include <stdio.h>
#include <errno.h>
#include <string.h> // For strerror

int main() {
    FILE *file;
    
    // Attempt to open the file
    file = fopen("array.txt", "w");

    // Check if file was successfully opened
    if(file==NULL){
        // Print error message to stderr
        perror("Error opening file");  // This prints a descriptive error message
        fprintf(stderr, "Error opening file: %s\n", strerror(errno)); // This prints the error based on errno
        return 1;}


    // Write to the file
    fprintf(file, "shukla\n");
    printf("Operation done\n");

    // Close the file
    fclose(file);

    return 0;
}
