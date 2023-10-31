#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        // If size is 0, return NULL, as there's no array to create.
        return NULL;
    }

    // Allocate memory for the character array using malloc.
    char *charArray = (char *)malloc(size * sizeof(char));

    if (charArray == NULL) {
        // If malloc fails to allocate memory, return NULL to indicate failure.
        return NULL;
    }

    // Initialize the array with the specified character 'c'.
    for (unsigned int i = 0; i < size; i++) {
        charArray[i] = c;
    }

    return charArray;
}

int main() {
    unsigned int size = 10;  // Change the size as needed.
    char character = 'A';   // Change the character as needed.

    // Create an array of characters with the specified size and character.
    char *result = create_array(size, character);

    if (result != NULL) {
        // Print the created array to verify the initialization.
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", result[i]);
        }
        printf("\n");

        // Don't forget to free the allocated memory when done using the array.
        free(result);
    } else {
        printf("Failed to create the array.\n");
    }

    return 0;
}
