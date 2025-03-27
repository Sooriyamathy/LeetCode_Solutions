#include <stdio.h>
#include <stdlib.h>

char kthCharacter(int k) {
    char a = 'a';
    int size = 1;
    char* b = (char*)malloc(sizeof(char));
    
    if (!b) { // Handle memory allocation failure
        return '\0';
    }

    *b = a;

    // Generate the sequence until size is large enough
    while (size < k) {
        int old_size = size;
        size *= 2;

        b = (char*)realloc(b, size * sizeof(char));
        if (!b) { // Handle realloc failure
            return '\0';
        }

        // Update the second half of the array
        for (int j = 0; j < old_size; j++) {
            b[j + old_size] = b[j] + 1;
        }
    }

    // Return the k-th character (0-based index, so b[k-1] for 1-based index)
    char result = b[k - 1];
    free(b); // Free the allocated memory
    return result;
}
