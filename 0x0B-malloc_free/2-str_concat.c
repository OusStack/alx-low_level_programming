#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
    // Treat NULL pointers as empty strings
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    // Compute length of input strings
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    // Allocate memory for concatenated string
    char *result = malloc(len1 + len2 + 1);

    // Check if memory allocation was successful
    if (result == NULL) {
        return NULL;
    }

    // Copy input strings into result
    strcpy(result, s1);
    strcat(result, s2);

    return result;
}

