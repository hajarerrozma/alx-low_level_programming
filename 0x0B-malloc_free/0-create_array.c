#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    // Check if the size is zero and return NULL in that case
    if (size == 0) {
        return NULL;
    }

    // Allocate memory for the character array
    char *array = (char *)malloc(size * sizeof(char));

    // Check if memory allocation was successful
    if (array == NULL) {
        return NULL; // Return NULL if memory allocation failed
    }

    // Initialize the array with the specified character
    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array; // Return a pointer to the initialized array
}

int main() {
    unsigned int size = 5;
    char initialChar = 'A';

    char *result = create_array(size, initialChar);

    if (result == NULL) {
        printf("Array creation failed.\n");
    } else {
        printf("Array created successfully: ");
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", result[i]);
        }
        printf("\n");

        free(result); // Don't forget to free the allocated memory when you're done.
    }

    return 0;
}
